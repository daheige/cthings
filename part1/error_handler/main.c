// error处理
// Created by daheige on 2023/10/22.

#include <stdio.h>
#include <string.h>
#include <errno.h>

// errno 是errno.h中定义的宏errno
extern int errno; // 错误码是外部errno.h中定义的
int main(){
    FILE *fp;
    int errnum;
    fp = fopen("test1.md","r");
    if (fp == NULL){
        errnum = errno;
        fprintf(stderr,"errno:%d\n",errno);
        // 通过perror指定错误输出的前缀
        perror("通过perror输出错误"); // 通过perror输出错误: No such file or directory

        // 将错误输出到终端
        // strerror 返回一个指针，指针指向当前 errno 值的文本表示形式
        fprintf(stderr,"打开文件错误:%s\n", strerror(errnum));
    }else{
        fclose(fp);
    }

    return 0;
}

