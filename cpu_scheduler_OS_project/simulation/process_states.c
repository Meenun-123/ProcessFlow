#include "../include/process.h"

void update_process_state(Process *p, state_t new_state) {
    p->state = new_state;
}

int count_ready_processes(Process p[], int n, int current_time) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (p[i].arrival_time <= current_time && p[i].state == READY) {
            count++;
        }
    }
    return count;
}
