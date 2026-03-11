#include <stdio.h>
#include "../include/process.h"

void report_performance(Process p[], int n, int total_time, int idle_time) {
    float cpu_utilization = ((float)(total_time - idle_time) / total_time) * 100;
    float throughput = (float)n / total_time;

    printf("\n--- Performance Report ---");
    printf("\nTotal Simulation Time: %d", total_time);
    printf("\nCPU Utilization: %.2f%%", cpu_utilization);
    printf("\nThroughput: %.4f processes/unit time\n", throughput);
}

