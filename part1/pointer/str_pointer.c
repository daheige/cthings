// char pointer and function
// Created by daheige on 2023/11/5.
#include <stdio.h>
#include <string.h>

int main() {
    // 定义一个数组
    char msg[] = "hello,world"; // 每个字符是可以修改的
    printf("msg:%s\n", msg);

    // 定义一个字符串指针，初始化值指向一个字符串常量，之后它可以被修改以指向其他地址
    char *pmessage = "hello,world";
    printf("pmessage:%s\n", pmessage);

    pmessage = "abc"; // 改变指针 pmessage 指向的字符串
    printf("pmessage:%s\n", pmessage);
    char dist[10];
    strcpy(dist, pmessage); // 将字符串 pmessage 复制到dist
    printf("pmessage:%s\n", pmessage);
    printf("dist:%s\n", pmessage);

    return 0;
}
