// cli 命令行参数
// Created by daheige on 2023/10/22.
#include <stdio.h>

// 参数的个数放在argc
// 每个参数放在一个char *数组列表中
// 获取参数argv[0]开始，以此类推
// argv[0] 存储程序的名称，argv[1] 是一个指向第一个命令行参数的指针，*argv[n] 是最后一个参数
// 使用一个用空格分隔的简单参数，如果想包含空格，请用双引号括起来
int main(int argc, char *argv[]) {
    if (argc == 2) {
        printf("the argument supplied is %s\n", argv[1]);
    } else if (argc > 2) {
        printf("too many arguments supplied.\n");
    } else {
        printf("One argument expected.\n");
    }
}
