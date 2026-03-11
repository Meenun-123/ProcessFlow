#include "../include/process.h"

int sjf_non_picker(Process p[], int n, int current_time) {
    int selected = -1;
    int min_burst = 999999;

    for (int i = 0; i < n; i++) {
        if (p[i].arrival_time <= current_time && p[i].state != TERMINATED) {
            if (p[i].burst_time < min_burst) {
                min_burst = p[i].burst_time;
                selected = i;
            }
        }
    }
    return selected;
}
