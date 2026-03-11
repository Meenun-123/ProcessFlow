#include <stdio.h>
#include "../include/process.h"

void export_results(const char *filename, Process p[], int n) {
    FILE *f = fopen(filename, "w");
    if (f == NULL) return;

    fprintf(f, "PID,Arrival,Burst,Priority,Exit,Wait,Turnaround\n");
    for (int i = 0; i < n; i++) {
        fprintf(f, "%d,%d,%d,%d,%d,%d,%d\n",
                p[i].pid, p[i].arrival_time, p[i].burst_time, p[i].priority,
                p[i].completion_time, p[i].waiting_time, p[i].turnaround_time);
    }

    fclose(f);
    printf("\nResults exported to %s\n", filename);
}

