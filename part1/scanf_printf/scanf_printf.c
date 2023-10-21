// scanf--printf使用
// Created by daheige on 2022/4/3.
// stdio.h 是一个头文件 (标准输入输出头文件) and #include 是一个预处理命令，用来引入头文件。
// 当编译器遇到 printf() 函数时，如果没有找到 stdio.h 头文件，会发生编译错误。
#include <stdio.h>

int main(void) {
    int price = 0;
    printf("please input price:");
    scanf("%d", &price); // 遇到空格或者换行符就停止读取

    int amount = 100;
    printf("please input amount:");
    scanf("%d", &amount); // 这里&表示取内存地址，用来存放输入的内容
    // c99写法，变量可以在哪里用提前定义下就可以
    int change = amount - price;
    printf("change price:%d", change);

    return 0;
}

/*
% ./a.out
please input price:12
please input amount:100
change price:88
 */
