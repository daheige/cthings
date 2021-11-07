// typedef demo
// Created by daheige on 2021/11/7.

#include <stdio.h>

// 定义类型别名
// 1.代码可读性好，2.维护方便 3.可移植性好
typedef unsigned char Byte;

typedef char (*func) (void);

typedef func Arr[5]; // Arr是一个数组，数组的元素是func类型，个数为5

char get_ch (void) {
    return 'a';
}

// 定义结构体别名
typedef struct {
    char *name;
    int leg_count, speed;
} animal;

int main (void) {
    Byte c = 'a';
    printf("c = %c\n", c);

    animal a;
    a.leg_count = 1;
    a.speed = 2;
    a.name = "abc";

    printf("name = %s,speed = %d,leg_count = %d\n", a.name, a.speed, a.leg_count);
    func f = get_ch;
    Arr a2 = {f};
    printf("c = %c", a2[0]());

    return 0;
}
