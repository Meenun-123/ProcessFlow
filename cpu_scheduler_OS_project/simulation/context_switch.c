#include <stdio.h>

int check_context_switch(int last_pid, int current_pid) {
    if (last_pid != -1 && last_pid != current_pid) {
        return 1;
    }
    return 0;
}

void log_context_switch(int time, int old_pid, int new_pid) {
    if (old_pid != -1) {
        printf("[Time %d] Context Switch: P%d -> P%d\n", time, old_pid, new_pid);
    }
}
