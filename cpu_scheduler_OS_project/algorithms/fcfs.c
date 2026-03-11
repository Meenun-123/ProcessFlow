#include "../include/process.h"

int fcfs_picker(Process p[], int n, int current_time) {
    int selected = -1;
    int earliest_arrival = 999999;

    for (int i = 0; i < n; i++) {
        if (p[i].arrival_time <= current_time && p[i].state != TERMINATED) {
            if (p[i].arrival_time < earliest_arrival) {
                earliest_arrival = p[i].arrival_time;
                selected = i;
            }
        }
    }
    return selected;
}
