// scanf
// Created by daheige on 2022/4/3.
#include <stdio.h>

int main (void) {
    int a = 0, b = 0;
    printf("please input a,b:");
    scanf("%d,%d", &a, &b); // 这里scanf读取分隔符号是逗号，也可以是空格
    printf("a = %d,b = %d", a, b);

    return 0;
}

/*
 *  % ./a.out
please input a,b:12,123
a = 12,b = 123
 */
