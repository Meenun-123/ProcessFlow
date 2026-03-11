#include <stdio.h>
#include "process.h"

void calculate_averages(Process p[], int n) {
    float total_wait = 0, total_tat = 0;
    for (int i = 0; i < n; i++) {
        total_wait += p[i].waiting_time;
        total_tat += p[i].turnaround_time;
    }
    printf("\nAverage Waiting Time: %.2f", total_wait / n);
    printf(" Average Turnaround Time: %.2f\n", total_tat / n);
}
