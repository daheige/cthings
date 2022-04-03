#include<stdio.h>

int main () {
    int hour = 10, minute = 59;
    char first = 'a';
    printf("current time:%d:%d first is:%c\n", hour, minute, first);

    // int类型变量定义
    int a = 12;
    int b = 1;
    printf("a = %d,b = %d\n", a, b);

    // 也可以先定义后初始化
    int i;
    i = 11;
    printf("i = %d\n",i);

    // 一行里定义多个变量
    int m =1,n = 12;
    printf("m = %d n = %d\n",m,n);
    
    return 0;
}
