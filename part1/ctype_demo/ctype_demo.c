// type convert in c
// Created by daheige on 2022/7/31.
#include <stdio.h>
#include <ctype.h>

// 定义字符串转换为int类型的函数
int atoi(char s[]);

int main(){
    printf("type convert\n");

    char s[] = "123";
    int m = atoi(s);

    printf("m = %d",m);

    // 字符转换为大写调用了ctype中的toupper函数
    char c = 'a';
    char c1 = toupper(c);
    printf("c1 = %c",c1);
    return 0;
}

int atoi(char s[]){
    int i = 0,n = 0;
    for(;s[i] >= '0' && s[i] <= '9';++i){
        n = 10 *n +(s[i]-'0');
    }

    return n;
}

