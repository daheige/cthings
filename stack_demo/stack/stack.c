//
// Created by daheige on 2021/11/5.
//
#include "stack.h"

static char stack[512];
static int top = 0;

void push (char c) {
    stack[top++] = c;
}

char pop (void) {
    return stack[--top];
}

int is_empty (void) {
    return top == 0;
}
