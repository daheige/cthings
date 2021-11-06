// main.c
// Created by daheige on 2021/11/6.

#include <stdio.h>
#include "ret_allocator.h"

int main(void){
    unit_t  *p = alloc_unit();
    printf("number: %d,msg:%s",p->number,p->msg);

    free_unit(p);
    p = NULL; // 手动置为NULL

    printf("free p success");

    return 0;
}

