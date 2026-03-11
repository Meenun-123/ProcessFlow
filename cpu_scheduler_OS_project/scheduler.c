#include "scheduler.h"
#include "algorithms.h"
#include "scheduler.h"
#include "algorithms.h"	
#include "scheduler.h"
int select_process(Process p[], int n, int current_time, algo_type_t algo, int quantum, int *time_in_q, int *last_idx) {
    switch (algo) {
        case ALGO_FCFS: return fcfs_picker(p, n, current_time);
        case ALGO_SJF_P: return sjf_pre_picker(p, n, current_time);
        case ALGO_SJF_NP: return sjf_non_picker(p, n, current_time);
        case ALGO_RR: return rr_picker(p, n, current_time, quantum, time_in_q, last_idx);
        case ALGO_PRIORITY_P: return priority_pre_picker(p, n, current_time);
        case ALGO_PRIORITY_NP: return priority_non_picker(p, n, current_time);
        default: return -1;
    }
}
