// populator.c
// Created by daheige on 2021/11/6.
#include <string.h>
#include <stdio.h>
#include "populator.h"

void set_unit(unit_t *p){
    if (p == NULL){
        printf("unit_t p is null\n");
        return;
    }

    p->number = 3;
    strcpy(p->msg,"hello,world");
}

