#include "../include/process.h"

int priority_pre_picker(Process p[], int n, int current_time) {
    int selected = -1;
    int min_priority = 999999;

    for (int i = 0; i < n; i++) {
        if (p[i].arrival_time <= current_time && p[i].state != TERMINATED) {
            if (p[i].priority < min_priority) {
                min_priority = p[i].priority;
                selected = i;
            }
        }
    }
    return selected;
}

