// enum demo
// Created by daheige on 2021/11/7.
#include <stdio.h>

enum Colors {
    RED,
    GREEN,
    BLUE
};

// 给枚举定义类型别名
typedef enum {
    SHEEP,
    WHEAT,
    WOOD,
    BRICK,
    ORE
} RESOURCE;

// 定义枚举指定值
typedef enum {
    RUNNING = 1,
    SUCCESS = 2,
    FAIL = 3,
} STATUS;


int main(void){
    printf("red = %d\n",RED);
    printf("green = %d\n",GREEN);

    RESOURCE r = SHEEP;
    printf("resource = %d\n",r);

    STATUS s = RUNNING;
    printf("status = %d\n",s);

    return 0;
}

