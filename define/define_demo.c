// define demo
// Created by daheige on 2021/11/7.
#include <stdio.h>
// 定义字符串宏
#define FOO "hello"
#define N 20

// 定义简单的函数表达式宏
#define MAX(x, y) ((x) > (y) ? (x):(y))

#define IS_EVEN(n) ((n) % 2 == 0)

#define FOO_NUM 1

#define DEBUG 1

#define DEBUG 1

// 如果宏的长度过长，可以使用反斜杠（ \ ）折行，将宏写成多行
#define PRINT_NUMS_TO_PRODUCT(a, b) { \
        int product = (a) * (b);          \
        for (int i = 0; i < product; i++) { \
            printf("current value: %d\n", i);                \
        }                                 \
    }

int main (void) {
    printf("foo = %s\n", FOO);
    int arr[N] = {1, 2, 3};
    printf("arr[1]= %d\n", arr[1]);
    PRINT_NUMS_TO_PRODUCT(1, 12);

    if(DEBUG){
        printf("debug is open");
    }

    // 预定义的宏
    printf("date = %s",__DATE__);
    printf("file = %s",__FILE__);

    return 0;
}
