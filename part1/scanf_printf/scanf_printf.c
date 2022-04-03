// scanf--printf使用
// Created by daheige on 2022/4/3.
#include <stdio.h>

int main (void) {
    int price = 0;
    printf("please input price:");
    scanf("%d", &price);

    int amount = 100;
    printf("please input amount:");
    scanf("%d",&amount);
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
