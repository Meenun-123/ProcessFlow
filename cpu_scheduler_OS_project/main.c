#include <stdio.h>
#include <stdlib.h>
#include "process.h"
#include "scheduler_types.h"
#include "scheduler.h"

int load_processes_from_file(const char *filename, Process p[]);
int manual_input(Process p[]);
void calculate_averages(Process p[], int n);
void run_simulation(Process p[], int n, algo_type_t algo, int quantum);

int main() {
    Process proc_list[50];
    int n = 0, choice, quantum = 2;
    while (1) {
        printf("\n--- CPU Scheduling Simulator ---");
        printf("\n1. Load File\n2. Manual Input\n3. Run FCFS\n4. Run SJF-P\n5. Run RR\n6. Run Priority-P\n7. Exit\nSelection: ");
        if (scanf("%d", &choice) != 1) break;
        if (choice == 7) exit(0);
        
        if (choice == 1) n = load_processes_from_file("data/processes.txt", proc_list);
        else if (choice == 2) n = manual_input(proc_list);
        else if (n > 0) {
            if (choice == 3) run_simulation(proc_list, n, ALGO_FCFS, 0);
            else if (choice == 4) run_simulation(proc_list, n, ALGO_SJF_P, 0);
            else if (choice == 5) {
                printf("Enter Quantum: ");
                scanf("%d", &quantum);
                run_simulation(proc_list, n, ALGO_RR, quantum);
            }
            else if (choice == 6) run_simulation(proc_list, n, ALGO_PRIORITY_P, 0);
            calculate_averages(proc_list, n);
        } else {
            printf("\n[!] Error: No processes loaded yet.\n");
        }
    }
    return 0;
}
