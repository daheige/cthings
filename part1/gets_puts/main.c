// gets()和puts()函数使用
// 读取一行内容，并输出到终端
// Created by daheige on 2023/10/21.
#include <stdio.h>

int main() {
    char buf[10]; // 字符串定义，容纳10个字符
    printf("enter a value:");
    // gets 函数从 stdin 读取一行到 s 所指向的缓冲区，直到一个终止符或 EOF
    // gets(buf); // 可以无限读取
    // 在2011年12月，ANSI 采纳了 ISO/IEC 9899:2011 标准
    // 标准中删除了 gets()函数，使用一个新的更安全的函数gets_s()替带
    // fgets会检测读取的buf大小
    // fgets读到\n结束符结束，且当前的数据小于n-1（9）,且fgets将\n也写入的缓冲区
    // 当超过了buf大小会自动截取
    fgets(buf, 10, stdin);
    printf("\nyou entered:");
    puts(buf);

    return 0;
}

/*
 * enter a value:daheige
 * you entered:daheige
 */

