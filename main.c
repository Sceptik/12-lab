#include <stdio.h>
#include <stdlib.h>
#include "head.h"

int main(){

    struct Time process[] = {{randH(), randM()}, {randH(), randM()}, {randH(), randM()}};
    for(int i=0; i < N; i++)
    {
        printf("Hour:%d \t Min: %d \n", process[i].hour, process[i].min);
    }

    struct Time total_time = processTime(process);
    struct Time step_minimum = min_step(process);

    printf("Total hour: %d \t Total min: %d \n", total_time.hour, total_time.min);
    printf("Minimalniy etap hour: %d \t min %d \n", step_minimum.hour, step_minimum.min);
}