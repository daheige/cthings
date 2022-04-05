#include<stdio.h>

// 定义常量
const int AMOUNT = 100;

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

    // AMOUNT = 10;// variable 'AMOUNT' declared const here
    printf("amount const = %d\n",AMOUNT);

    printf("%f\n",10 / 9.0); // 1.111111

    printf("%d\n",10 /3 * 3); // 9

    //  format specifies type 'int' but the argument has type 'double'
    // 程序的结果是一个double类型
    // printf("%d\n",10.0/3);
    //
    // 浮点数计算，有小数点表示浮点数
    // 当整数和浮点数同时出现，会把整数转换为浮点数，然后进行浮点数的计算
    printf("%f\n",10.0/3 * 3); // 10.000000

    // 双精度浮点数double
    double foot = 1.2;
    printf("foot = %lf",foot);

    return 0;
}
