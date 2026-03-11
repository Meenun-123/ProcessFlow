#include <stdio.h>
#include "../include/process.h"

void print_process_table(Process p[], int n)
{
    printf("\n========== PROCESS TABLE ==========\n\n");

    printf("PID\tArrival\tBurst\tPriority\n");
    printf("-----------------------------------\n");

    for(int i = 0; i < n; i++)
    {
        printf("P%d\t%d\t%d\t%d\n",
               p[i].pid,
               p[i].arrival_time,
               p[i].burst_time,
               p[i].priority);
    }

    printf("\n");
}
