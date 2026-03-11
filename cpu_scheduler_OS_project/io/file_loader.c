#include <stdio.h>
#include <stdlib.h>
#include "../include/process.h"

int load_processes_from_file(const char *filename, Process p[]) {
    FILE *f = fopen(filename, "r");
    if (f == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 0;
    }

    int n;
    if (fscanf(f, "%d", &n) != 1) {
        fclose(f);
        return 0;
    }

    for (int i = 0; i < n; i++) {
        p[i].pid = i + 1;
        if (fscanf(f, "%d %d %d", &p[i].arrival_time, &p[i].burst_time, &p[i].priority) != 3) {
            break;
        }
        p[i].remaining_time = p[i].burst_time;
        p[i].state = NEW;
    }

    fclose(f);
    return n;
}
