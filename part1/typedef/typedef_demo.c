// typedef demo
// Created by daheige on 2021/11/7.
// typedef 类型别名定义，并没有增加新的语义，在编辑器编译的时候会被替换为对应的类型
// 1. 可以使得程序参数化，提高程序的可移植性
// 2. 为程序提供更好的说明性和可读性

#include <stdio.h>

// 定义类型别名
// 1.代码可读性好，2.维护方便 3.可移植性好
typedef unsigned char Byte;

// 定义函数类型，不需要参数的函数指针定义，返回值是char
// 类似函数char get_ch (void)
// 函数指针定义
typedef char (*func)(void);

typedef func Arr[5]; // Arr是一个数组，数组的元素是func类型，个数为5

char get_ch(void) {
    return 'a';
}

// 定义字符串别名
typedef char *String;

// 定义结构体别名
typedef struct {
    char *name; // 字符串指针
    int leg_count, speed;
} animal;

int main(void) {
    Byte c = 'a';
    printf("c = %c\n", c);

    animal a;
    a.leg_count = 1;
    a.speed = 2;
    a.name = "abc";

    printf("name = %s,speed = %d,leg_count = %d\n", a.name, a.speed, a.leg_count);
    func f = get_ch;
    Arr a2 = {f};
    printf("c = %c\n", a2[0]());

    String s = "abc";
    printf("s = %s", s);

    return 0;
}
