// read file
// Created by daheige on 2023/10/21.

#include <stdio.h>

int main(){
    FILE *fp = NULL; // 这里未赋值的文件句柄设置为NULL
    // w+表示打开一个文本文件，允许读写文件。如果文件已存在，
    // 则文件会被截断为零长度，如果文件不存在，则会创建一个新文件。
    fp = fopen("./test.md","w+");
    fprintf(fp,"this is readfile demo\n");
    fputs("this is testing",fp); // 写入内容到文件中
    fclose(fp); // 关闭文件句柄

    return 0;
}
