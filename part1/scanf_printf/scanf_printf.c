// scanf--printf使用
// Created by daheige on 2022/4/3.
#include <stdio.h>

int main (void) {
    int price = 0;
    printf("please input price:");
    scanf("%d", &price);

    int total = 100;
    int change = total - price;
    printf("change price:%d", change);

    return 0;
}

/*
 * % ./a.out
please input price:12
change price:88
 */
