// fopen读取文件
// Created by daheige on 2023/10/21.
#include <stdio.h>

int main(){
    FILE  *fp = NULL;
    fp = fopen("test.md","r");
    char content[200];
    fgets(content,200,fp); // 读取一行内容
    fclose(fp);
    // 读取的文件内容
    printf("读取的文件内容：%s",content);

    return 0;
}
