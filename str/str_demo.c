// string demo
// Created by daheige on 2021/11/4.
#include <stdio.h>

int main(void){
    // 每个字符末尾都有一个字符'\0'做结束符，这里的\0是ASCII码的八进制表示，
    // 也就是ASCII码为0的Null字符，
    // 在C语言中这种字符串也称为以零结尾的字符串（Null-terminated String）
    char c = 'a'; // 字符声明

    // 字符串字面值
    char c1[] = "abc"; // 字符串声明.字符串字面值是只读的，不允许修改
    printf("c = %c,c1 = %s\n",c,c1);

    // 字符数组声明
//    char s[10] = "hello";
    char s[10] = {'h','e','l','l','o'}; // 后面部分没有声明，自动初始化为0，即Null字符
    printf("s[0]= %c\n",s[0]);
}
