#include <stdio.h>
#include "../include/process.h"

#define BOX_WIDTH 7

void print_gantt_chart(int history[], int time_limit)
{
    if (time_limit <= 0)
    {
        printf("\nNo execution history available.\n");
        return;
    }

    printf("\n========== GANTT CHART ==========\n\n");

    int start = 0;

     while (start < time_limit)
    {
        int current = history[start];
        int end = start;

        while (end < time_limit && history[end] == current)
            end++;

        printf("+");
        for (int j = 0; j < BOX_WIDTH; j++)
            printf("-");

        start = end;
    }
    printf("+\n");

     start = 0;

    while (start < time_limit)
    {
        int current = history[start];
        int end = start;

        while (end < time_limit && history[end] == current)
            end++;

        if (current == -1)
            printf("| Idle ");
        else
            printf("| P%-3d ", current);

        start = end;
    }

    printf("|\n");

     start = 0;

    while (start < time_limit)
    {
        int current = history[start];
        int end = start;

        while (end < time_limit && history[end] == current)
            end++;

        printf("+");
        for (int j = 0; j < BOX_WIDTH; j++)
            printf("-");

        start = end;
    }
    printf("+\n");

     start = 0;
    printf("0");

    while (start < time_limit)
    {
        int current = history[start];
        int end = start;

        while (end < time_limit && history[end] == current)
            end++;

        printf("%7d", end);

        start = end;
    }

    printf("\n\n");
}
