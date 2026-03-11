#ifndef SCHEDULER_H
#define SCHEDULER_H

#include "process.h"
#include "scheduler_types.h"

int select_process(Process p[], int n, int current_time,
                   algo_type_t algo,
                   int quantum,
                   int *time_in_q,
                   int *last_idx);

#endif
