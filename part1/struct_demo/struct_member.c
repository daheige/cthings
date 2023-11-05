// struct member
// Created by daheige on 2023/11/5.

#include <stdio.h>

struct point {
    int x;
    int y;
};

struct rect {
    struct point pt1; // 定义一个点
    struct point pt2; // 定义另一个点
};

struct point new_point(int x, int y) {
    struct point p;
    p.x = x;
    p.y = y;
    return p;
}

struct point add_point(struct point p1, struct point p2) {
    p1.x += p2.x;
    p1.y += p2.y;
    return p1;
}


// 判断一个点是否在矩形中
int in_rect(struct point p, struct rect r) {
    return p.x >= r.pt1.x && p.x < r.pt2.x
           && p.y >= r.pt1.y && p.y < r.pt2.y;
}

struct wordInfo {
    char *word;
    int count;
};

int main() {
    struct point p = new_point(1, 2);
    printf("p.x = %d p.y = %d\n", p.x, p.y);

    struct point p2 = new_point(2, 3);
    struct point p3 = add_point(p, p2);
    printf("p3.x = %d p3.y = %d\n", p3.x, p3.y);

    struct rect r;
    r.pt1 = p;
    r.pt2 = p3;
    struct point p4 = new_point(2, 4);

    int b = in_rect(p4, r);
    printf("p4 in rect r result:%d\n", b);

    // 结构体指针
    struct point *pp; // pp是一个指针变量，指向point变量的内存地址
    pp = &p; // &表示取地址操作
    // 改变x,y值
    pp->x = 10; // 通过->操作符访问指针变量元素x
    pp->y = 2;
    printf("p.x = %d p.y = %d\n", p.x, p.y);

    ++pp->x; // 表示++(pp->x)
    // pp->x++; // 表示pp->x 自增操作
    printf("p.x = %d p.y = %d\n", p.x, p.y);

    // 结构体数组
    struct point points[3] = {
            new_point(1, 2),
            new_point(2, 3),
    };
    printf("p.0.x = %d p.0.y = %d\n", points[0].x, points[0].y);

    points[2] = new_point(3, 4); // 给第三个元素赋值
    printf("p.2.x = %d p.2.y = %d\n", points[2].x, points[2].y);
    size_t len = sizeof(points) / sizeof(points[0]);
    for (size_t i = 0; i < len; i++) {
        printf("current point x = %d,y = %d\n", points[i].x, points[i].y);
    }

    struct wordInfo words[] = {
            "auto", 0,
            "go", 1,
            "php", 2,
            "default", 3,
            "void", 4
    };
    for (size_t i = 0; i < sizeof(words) / sizeof(words[0]); i++) {
        printf("word:%s count:%d\n", words[i].word, words[i].count);
    }

    return 0;
}


