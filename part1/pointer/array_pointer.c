// array and pointer
// Created by daheige on 2023/11/5.
#include <stdio.h>

// s是一个字符指针，实际上它等同于char s[]
// 传递给函数的是一个字符指针
int strlen(char *s) {
    int n;
    // 判断字符是否是\0结尾，如果不是的话，就指针运算+1得到下一个元素的地址
    for (n = 0; *s != '\0'; s++) {
        n++;
    }

    return n;
}

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int *pa; // pa是指向int类型的指针，*pa返回值是int
    pa = &a[0]; // pa的值是数组元素a[0]的地址，也就是pa指向数组的第一个元素地址
    *pa = 12; // 改变第一个元素的值，*pa表示取值操作，这里赋值为12，这个时候a[0] = 12了
    printf("a[0] = %d\n", a[0]); // a[0] = 12
    pa = a; // 由于数组名所代表的就是数组最开始的一个元素的地址，所以这个写法也是对的
    *pa = 123;
    printf("a[0] = %d\n", a[0]);
    int *pa2;
    pa++; // 指针运算就得到了下一个元素的地址
    printf("a[1] = %d\n", *pa);

    int *y = a + 1; // a+1相当于指针运算，相当于是&a[0]+1
    printf("a[1] = %d\n", *y); // 2

    printf("abc len:%d", strlen("abc"));

    char s[] = "hello,world";
    printf("s len is:%d", strlen(s));

    return 0;
}
