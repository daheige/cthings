// header自定义引入
// Created by daheige on 2023/10/21.
// 编译二进制文件：gcc -o main main.c my_header.c
#include <stdio.h>
#include "my_header.h"

int main(){
    // 调用自定义的函数和常量，全局变量
    int m = max(1,12);
    printf("m = %d\n",m);
    printf("limits= %d\n",LIMIT_TIMES);
    printf("my_read_count = %d\n",my_read_count);

    // 初始化定义结构体并赋值
    Person p;
    p.age = 10;
    p.name = "xiaoming";
    person_show(&p);

    return 0;
}
