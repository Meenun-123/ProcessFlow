#include <stdio.h>
#include "../include/process.h"

void print_timeline(Process p[], int n) {
    printf("\nProcess Timeline:\n");
    for (int i = 0; i < n; i++) {
        printf("P%d: ", p[i].pid);
        for (int j = 0; j < p[i].arrival_time; j++) printf(" ");
        for (int j = 0; j < p[i].burst_time; j++) printf("=");
        printf(" (Done at %d)\n", p[i].completion_time);
    }
}

