// 递归使用
// Created by daheige on 2023/10/22.
// 递归指的是在函数的定义中使用函数自身的方法

#include <stdio.h>

// 计算数的阶乘
double factorial(unsigned int i){
    if(i <= 1){
        return 1;
    }

    return i* factorial(i-1);
}

// 斐波那契数列
int fibonaci(int i){
    if (i == 0) return 0;
    if (i == 1) return 1;

    return fibonaci(i-1)+ fibonaci(i-2);
}

int main(){
    int i = 10;
    printf("%d 的阶乘是%f\n", i,factorial(10));

    for (int i= 0;i<10;i++){
        printf("fibonaci(%d) =\t%d\n", i,fibonaci(i));
    }

    return 0;
}
