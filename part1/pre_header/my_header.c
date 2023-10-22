// Created by daheige on 2023/10/21.
#include "my_header.h"
#include <stdio.h>

// 在c源文件中定义一个全局变量
int my_read_count = 10;
const int LIMIT_TIMES = 12;

int max(int a,int b){
    return a > b ? a:b;
}

// 实现make_person
// const限定这个变量在函数内部能更改
Person make_person(char *name,const int8_t age){
    Person p;
    p.name = name;
    p.age = age;
    return p;
}

// 实现person_show方法
// const 限定结构体指针对象在内部能更改
void person_show(const Person *p){
    // error: cannot assign to variable 'p' with const-qualified type 'const Person *'
    // p->name = "daheige"; // 这是不允许的
    printf("name:%s age:%d\n",p->name,p->age);
    char desc[100];
    sprintf(desc,"name:%s,age:%d",p->name,p->age);
    printf("sprintf res:%s\n",desc);
}

