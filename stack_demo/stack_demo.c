// header include
// Created by daheige on 2021/11/5.

#include <stdio.h>
#include "./stack/stack.h"

// gcc -o main.out stack_demo.c stack/stack.c -I stack
int main(void ){
    push('a');
    push('b');
    push('c');
    while(!is_empty()){
        putchar(pop());
    }

    printf("\n");
}