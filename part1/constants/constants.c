// constants
// Created by daheige on 2022/5/16.
#include <stdio.h>
#include <string.h>

// 符号常量，宏常量
#define LOWER 0 // 定义宏常量不需要分号结尾
#define UPPER 1
#define STEP 20

// 通过关键字const定义常量，需要指定类型
const int MAX_SIZE = 100;

const char helloTitle[] = "hello,world"; // 字面量字符串

int main(void)
{
    printf("char:%c\ninteger:%d\nfloat:%f\n", '{', 34, 1.23);

    for (int i = 0; i < STEP; i++)
    {
        printf("current index = %d\n", i);
    }

    printf("MAX_SIZE = %d\n", MAX_SIZE);

    printf("constants of helloTitle:%s\n",helloTitle);
    // 字符串长度
    printf("len of helloTitle is:%lu",strlen(helloTitle));
    return 0;
}
