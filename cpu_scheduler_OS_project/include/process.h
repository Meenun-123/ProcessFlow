#ifndef PROCESS_H
#define PROCESS_H

#define MAX_PROCESSES 50
#define MAX_TIME 2000

typedef enum { NEW, READY, RUNNING, WAITING, TERMINATED } state_t;

typedef struct {
    int pid;
    int arrival_time;
    int burst_time;
    int remaining_time;
    int priority;
    int completion_time;
    int waiting_time;
    int turnaround_time;
    int response_time;
    state_t state;
} Process;

void print_gantt_chart(int history[], int time_limit);
void print_process_table(Process p[], int n);
void compare_algorithms(Process processes[], int n);

#endif
