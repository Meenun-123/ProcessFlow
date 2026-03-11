#include <stdio.h>
#include "process.h"

int manual_input(Process p[]) {
    int num;
    printf("Enter number of processes: ");
    scanf("%d", &num);
    for (int i = 0; i < num; i++) {
        p[i].pid = i + 1;
        printf("\nProcess %d\n", p[i].pid);
        printf("Arrival Time: "); scanf("%d", &p[i].arrival_time);
        printf("Burst Time: "); scanf("%d", &p[i].burst_time);
        printf("Priority: "); scanf("%d", &p[i].priority);
        p[i].remaining_time = p[i].burst_time;
        p[i].state = 0; // NEW
    }
    return num; 
}
