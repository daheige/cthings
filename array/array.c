// array demo
// Created by daheige on 2021/11/4.

#include <stdio.h>
#include <stdlib.h>

// 定义常量
/*
 * C语言中，可以用 #define 定义一个标识符来表示一个常量。
 * 其特点是：定义的标识符不占内存，只是一个临时的符号，预编译后这个符号就不存在了。
 * 预编译又叫预处理。预编译不是编译，而是编译前的处理。这个操作是在正式编译之前由系统自动完成的。
 * 用 #define 定义标识符的一般形式为：#define  标识符  常量   //注意, 最后没有分号
 *
 * #define 和 #include 一样，也是以“#”开头的。
 * 凡是以“#”开头的均为预处理指令，#define也不例外。
 */
#define  N 20

int a[N];

void gen_random (int upper_bound) {
    int i;
    for (i = 0; i < N; i++) {
        a[i] = rand() % upper_bound;
    }
}

void print_random (void) {
    for (int i = 0; i < N; i++) {
        printf("current rnd = %d\n", a[i]);
    }
}

enum coord_type {
    RECT = 0, // 定义枚举类型
    POLAR = 1
};

struct complex_data {
    enum coord_type t; // 结构体中嵌入枚举类型
    double a, b;
};

int main (void) {
    int count[4]; // 声明一个int类型的数组，存放了4个整数的int
    count[0] = 1;
    count[1] = 2;
    count[2] = 3;

    size_t len = sizeof(count) / sizeof(count[0]);
    for (int i = 0; i < len; i++) {
        printf("i = %d\n", count[i]);
    }

    // 不指定个数，让编译器自己推导个数
    int c2[] = {1, 2, 3};
    printf("c2.len = %lu, c2[0]= %d\n", sizeof(c2) / sizeof(c2[0]), c2[0]);
    // 2.len = 3,c2[0]= 1

    printf("count.0 = %d", count[0]);
    struct complex_data c[2]; // 定义数组，里面存放的类型是一个结构体
    struct complex_data c1 = {RECT, 1.2, 1.3};
    c[0] = c1;
    //  count.0 = 1c[0].a = 1.200000
    printf("c[0].a = %f\n", c[0].a);

    /**
     * C标准库中生成伪随机数的是rand函数，
     * 使用这个函数需要包含头文件stdlib.h，它没有参数，
     * 返回值是一个介于0和RAND_MAX之间的接近均匀分布的整数。
     * RAND_MAX是该头文件中定义的一个常量，在不同的平台上有不同的取值，
     * 但可以肯定它是一个非常大的整数。通常我们用到的随机数是限定在某个范围之中的
     */
    int x = rand() % 10;
    printf("x = %d\n", x);

    // 生成随机数
    gen_random(12);
    print_random();

    // 多维数组,可以像嵌套结构体一样用嵌套Initializer初始化
    int a[3][2] = {
            {1, 2},
            {3, 4},
            {5, 6}
    };

    printf("a[1][1] = %d\n", a[1][1]); // 4

    // char gesture[3][10] = {
    // 声明声明的个数N
    char gesture[][10] = {
            "abc",
            "cde",
            "xyz"
    };
    printf("gesture[0] = %s\n", gesture[0]); // abc

    int num;
    printf("please input a number: ");
    scanf("%d",&num); // 接收用户输入的数字
    printf("you input number: %d\n",num);
}

