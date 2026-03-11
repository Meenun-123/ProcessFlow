#include "../include/process.h"

int sjf_pre_picker(Process p[], int n, int current_time) {
    int selected = -1;
    int min_remaining = 999999;

    for (int i = 0; i < n; i++) {
        if (p[i].arrival_time <= current_time && p[i].state != TERMINATED) {
            if (p[i].remaining_time < min_remaining) {
                min_remaining = p[i].remaining_time;
                selected = i;
            }
        }
    }
    return selected;
}
