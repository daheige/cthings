// pointer
// Created by daheige on 2021/11/6.
#include <stdio.h>

// 指针类型的参数和返回值
// 交换px,py的内存地址
int *swap (int *px, int *py) {
    int temp;
    temp = *px;
    *px = *py;
    *py = temp;

    return px;
}

// void print_array(int *a){ // 这种写法是通过传递了数组的指针变量
// 如果这个参数指向一个元素，通常写成指针的形式，如果这个参数指向一串元素中的首元素，则经常写成数组的形式
void print_array (int a[]) { // 在函数原型中，如果参数是数组，则等价于参数是指针的形式
    for (int i = 0; i < 10; i++) {
        printf("current value is: %d\n", a[i]);
    }
}

// 指针与const限定符
/*
 * const限定符和指针结合起来常见的情况有以下几种
 * const int *a
 * int const *a
 * a是一个指向const int型的指针，a所指向的内存单元不可改写，所以(*a)++是不允许的，但a可以改写，所以a++是允许的
 *
 *     int * const a;
 *     a是一个指向int型的const指针，*a是可以改写的，但a不允许改写
 *
 *     int const * const a;
 *     a是一个指向const int型的const指针，因此*a和a都不允许改写
 *
 *     即使不用const限定符也能写出功能正确的程序，但良好的编程习惯应该尽可能多地使用const，
 *     因为：
 *     1、const给读代码的人传达非常有用的信息。比如一个函数的参数是const char *，
 *     你在调用这个函数时就可以放心地传给它char *或const char *指针，而不必担心指针所指的内存单元被改写。
 *
 *     2、尽可能多地使用const限定符，把不该变的都声明成只读，这样可以依靠编译器检查程序中的Bug，防止意外改写数据。
 *
 *     3、const对编译器优化是一个有用的提示，编译器也许会把const变量优化成常量。
 */

struct unit{
    char c;
    int num;
};

int main (void) {
    // p是int类型的指针类型,不确定的指针地址称为野指针，一般在定义指针变量时候，初始化为NULL
    int *p = NULL; // 指针占据4字节，对于void *指针常用于函数接口
    int a = 12;
    p = &a; // 将a的地址赋值给p

    *p = 13; // *p表示取值操作，*是指针间接寻址运算符，*p表示取指针p所指向的变量的值
    // *运算符的操作必须是指针类型
    printf("a is:%d", a);

    int i = 10, j = 20;
    int *q = swap(&i, &j);
    printf("now i = %d,j = %d,*q = %d\n", i, j, *q);

    // 数组指针类型
    int arr[10] = {1, 2, 3}; // 没有初始化的元素默认是0
    int *pa = &arr[0]; // pa是一个指向int类型的指针变量
//    pa++;
    *pa = *pa + 1; // 这里改变arr[0]的值，因为*pa是取值操作，相当于拿到了arr[0]的值
    printf("pa = %p\n", pa);
    printf("arr[0] = %d\n", arr[0]);
//    print_array(&arr);
    print_array(arr);

    // 指针与结构体
    struct unit u;
    u.c = 'a';
    u.num = 12;

    struct  unit *pu = &u;

    // 通过指针pu访问结构体成员可以写成(*pu).c和(*pu).num
    // c提供了->简单运算符，取值操作
    // 当改变pu指针指向的值，就会反应到u上面
    pu->c = 'b';
    pu->num = 1;

    printf("u.c = %c,u.num = %d",u.c,u.num);
    return 0;
}


