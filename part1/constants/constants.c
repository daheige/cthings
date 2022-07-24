// constants
// Created by daheige on 2022/5/16.
#include <stdio.h>

// 符号常量，宏常量
#define LOWER 0 // 定义宏常量不需要分号结尾
#define UPPER 1
#define STEP 20

// 通过关键字const定义常量，需要指定类型
const int MAX_SIZE = 100;

int main(void)
{
    printf("char:%c\ninteger:%d\nfloat:%f\n", '{', 34, 1.23);

    for (int i = 0; i < STEP; i++)
    {
        printf("current index = %d\n", i);
    }

    printf("MAX_SIZE = %d\n", MAX_SIZE);

    return 0;
}
