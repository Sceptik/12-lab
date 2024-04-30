#include <stdio.h>
#include <stdlib.h>
#include "head.h"

int randH(){
    return rand()%24;
}

int randM(){
    return rand()%60;
}

struct Time processTime(struct Time process[]){
    int t_min = 0;
    int t_hour = 0;
    for(int i = 0; i < N; i++){
        t_min += process[i].min;
        t_hour += process[i].hour;
    }
    struct Time total_time = {t_hour, t_min};
    return total_time;
}

struct Time min_step(struct Time process[]){
    int step_min = 0; //Общее время шага в минутах
    int step_minimum = 999999; //Минимальное время
    int min_index;
    for(int i = 0; i < N; i++){
        step_min = process[i].hour * 60 + process[i].min;
        if(step_min < step_minimum){
            step_minimum = step_min;
            min_index = i;
        }
    }
    struct Time minimum = {process[min_index].hour, process[min_index].min};
    return minimum;
}