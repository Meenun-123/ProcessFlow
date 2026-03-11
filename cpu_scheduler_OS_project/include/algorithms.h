#ifndef ALGORITHMS_H
#define ALGORITHMS_H

#include "process.h"

int fcfs_picker(Process p[], int n, int current_time);

int sjf_pre_picker(Process p[], int n, int current_time);

int sjf_non_picker(Process p[], int n, int current_time);

int rr_picker(Process p[], int n, int current_time,
              int quantum, int *time_in_q, int *last_idx);

int priority_pre_picker(Process p[], int n, int current_time);

int priority_non_picker(Process p[], int n, int current_time);

void run_fcfs(Process p[], int n, float *avg_wt, float *avg_tat);

void run_sjf_preemptive(Process p[], int n, float *avg_wt, float *avg_tat);

void run_round_robin(Process p[], int n, int quantum,
                     float *avg_wt, float *avg_tat);

void run_priority_preemptive(Process p[], int n,
                             float *avg_wt, float *avg_tat);

#endif
