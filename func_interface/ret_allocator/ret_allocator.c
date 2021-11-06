// ret_allocator.c
// Created by daheige on 2021/11/6.

#include <stdio.h>
#include <string.h> // 字符串操作的相关函数头定义
#include <stdlib.h> // 包含exit函数定义
#include "ret_allocator.h"

unit_t  *alloc_unit(void){
    unit_t  *p = malloc(sizeof(unit_t));
    if (p == NULL){
        printf("out of memory\n");
        exit(1);
    }

    p->number = 3;
    p->msg = malloc(20); // 分配内存
    strcpy(p->msg,"hello,world");

    return p;
}

void free_unit(unit_t *p){
    free(p->msg); //释放内存
    free(p);
}

