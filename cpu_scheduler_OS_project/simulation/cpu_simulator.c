#include <stdio.h>
#include "process.h"
#include "scheduler_types.h"
#include "scheduler.h"

void print_gantt_chart(int history[], int time_limit);

void run_simulation(Process p[], int n, algo_type_t algo, int quantum)
{
    int current_time = 0, completed = 0, last_idx = -1, time_in_q = 0;
    int history[2000];

    for(int i = 0; i < n; i++)
    {
        p[i].remaining_time = p[i].burst_time;
        p[i].completion_time = 0;
        p[i].waiting_time = 0;
        p[i].turnaround_time = 0;
        p[i].response_time = -1;
        p[i].state = NEW;
    }

    for(int i = 0; i < 2000; i++)
        history[i] = -1;

    while (completed < n && current_time < 1999)
    {
        for (int i = 0; i < n; i++)
        {
            if (p[i].arrival_time <= current_time && p[i].state == NEW)
                p[i].state = READY;
        }

        int idx = select_process(p, n, current_time, algo, quantum, &time_in_q, &last_idx);

        if (idx != -1)
        {
            history[current_time] = p[idx].pid;

            p[idx].state = RUNNING;
            p[idx].remaining_time--;

            current_time++;

            if (p[idx].remaining_time <= 0)
            {
                p[idx].state = TERMINATED;
                p[idx].completion_time = current_time;

                p[idx].turnaround_time =
                    p[idx].completion_time - p[idx].arrival_time;

                p[idx].waiting_time =
                    p[idx].turnaround_time - p[idx].burst_time;

                completed++;
                last_idx = -1;
            }
        }
        else
        {
            history[current_time] = -1;
            current_time++;
        }
    }

    print_gantt_chart(history, current_time);
}
