#include <stdio.h>

// 函数原型定义
// 返回值类型 function名字 参数0个或多个
// int power(int m, int n);
int power(int, int); // 原型定义中的参数名字可选
int main()
{

    int i = 0;
    for (; i < 10; i++)
    {
        printf("current index = %d power(2,%d) = %d power(-3,%d) = %d\n", i, i, power(2, i), i, power(-3, i));
    }
}

// power函数声明实现
int power(int base, int n)
{
    int i, p = 1;
    for (i = 1; i <= n; ++i)
    {
        p = p * base;
    }

    return p;
}
