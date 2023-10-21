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

struct Book{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

// typedef 来为用户自定义的数据类型取一个新的名字
// 通过typedef 定义类型别名 struct后面的BookInfo可以省略
typedef struct BookInfo {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
} BookInfo;

//typedef struct {
//    char title[50];
//    char author[50];
//    char subject[100];
//    int book_id;
//} BookInfo;

void book_desc(BookInfo b){
    printf("b.title:%s b.author:%s b.book_id=%d\n",b.title,b.author,b.book_id);
}

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
    printf("s.cd.a = %f,s.cd.b = %f\n", s.cd.a, s.cd.b);
    printf("s.e_cd.a = %f,s.e_cd.b = %f,s.e_cd.t = %d\n", s.e_cd.a, s.e_cd.b,s.e_cd.t);

    printf("segment size:%zu bytes\n",sizeof(s)); // segment size:48 bytes

    // 通过.xx到方式赋值字段
    struct Book b = {
          .title = "golang",
          .author = "google",
          .subject = "goroutine",
          .book_id = 1
    };
    printf("b.title:%s b.author:%s b.book_id=%d\n",b.title,b.author,b.book_id);

    BookInfo book = {
            .title = "c lang",
            .author = "c",
            .subject = "c",
            .book_id = 2
    };
    book_desc(book);

    return 0;
}

