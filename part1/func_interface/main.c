// main.c
// Created by daheige on 2021/11/6.
#include <stdio.h>
#include "populator.h"

//  % gcc -o main.out main.c populator.c
int main(void ){

    unit_t u;
    set_unit(&u);
    printf("number: %d,msg: %s\n",u.number,u.msg);

    return 0;
}

