// pointer array
// Created by daheige on 2023/11/5.

#include <stdio.h>

int main() {
    char *name[] = {"a", "b", "c"}; // 定义一个指针数组
    for (int i = 0; i < sizeof(name) / sizeof(name[0]); i++) {
        printf("current item:%s\n", name[i]);
    }

    int x[] = {1, 2, 3};
    int y[] = {2, 3, 4};
    int z[] = {3, 4, 5};
    // 定义一个指针数组，b的每个元素都是一个数组指针
    int *b[3]; // 分配3个指针，每个指针都是指向一个数组
    b[0] = x;
    b[1] = y;
    b[2] = z;
    for (int i = 0; i < 3; i++) {
        printf("current i = %d\n", i);
        for (int j = 0; j < 3; j++) {
            printf("current i= %d item= %d\n", i, b[i][j]);
        }
    }

    return 0;
}
