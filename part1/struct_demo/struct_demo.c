// struct demo
// Created by daheige on 2021/11/4.

#include <stdio.h>

// 定义结构体
struct point {
    double x, y;
};

// 函数声明
struct point make_point (double x, double y);

// 函数定义具体实现，通过函数返回一个结构体
struct point make_point (double x, double y) {
    struct point p = {x, y};

    return p;
}

// enum枚举声明
enum coord_type {
    RECT = 0, // 定义枚举类型
    POLAR = 1
};

// 结构体使用
struct complex_data {
    enum coord_type t; // 结构体中嵌入枚举类型
    double a, b;
};

struct complex_data make_complex (double a, double b) {
    struct complex_data c;
    c.a = a;
    c.b = b;
    c.t = POLAR;

    return c;
}

// 嵌套结构体
struct segment {
    struct complex_data cd;
    struct complex_data e_cd;
};

int main () {
    struct point p;
    p.x = 1;
    p.y = 1.2;
    printf("x = %f,y = %f\n", p.x, p.y);

    // 简单方式初始化
    struct point p1 = {1.2, 1.5};
    printf("x = %f,y = %f\n", p1.x, p1.y);

    // 通过.x字段名方式声明
    struct point p2 = {.x=1.2, .y=1.2};
    printf("x = %f,y = %f\n", p2.x, p2.y);

    struct point p3 = make_point(1, 1.2);
    printf("x = %f,y = %f\n", p3.x, p3.y);

    struct complex_data c;
    c.t = RECT;
    c.a = 1.1;
    c.b = 1.3;
    printf("a = %f,b = %f\n", c.a, c.b);

    struct complex_data c2 = make_complex(1.3, 1.2);
    printf("a = %f,b = %f\n", c2.a, c2.b);

    struct segment s = {c, c2};
    printf("s.cd.a = %f,s.cd.b = %f", s.cd.a, s.cd.b);
    printf("s.e_cd.a = %f,s.e_cd.b = %f,s.e_cd.t = %d", s.e_cd.a, s.e_cd.b,s.e_cd.t);

    return 0;
}

