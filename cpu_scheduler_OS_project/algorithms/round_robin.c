#include "../include/process.h"

int rr_picker(Process p[], int n, int current_time, int quantum, int *time_in_q, int *last_idx) {
    if (*last_idx != -1 && p[*last_idx].state == RUNNING && *time_in_q < quantum && p[*last_idx].remaining_time > 0) {
        (*time_in_q)++;
        return *last_idx;
    }

    *time_in_q = 1;
    int start = (*last_idx + 1) % n;
    
    for (int i = 0; i < n; i++) {
        int idx = (start + i) % n;
        if (p[idx].arrival_time <= current_time && p[idx].state != TERMINATED) {
            *last_idx = idx;
            return idx;
        }
    }

    return -1;
}

