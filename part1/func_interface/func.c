#include <stdio.h>

// 函数原型定义
// 返回值类型 function名字 参数0个或多个
// int power(int m, int n);
int power(int, int); // 原型定义中的参数名字可选

int power2(int base, int n)
{
    // 减少局部变量声明
    int p;
    for (p = 1; n > 0; --n)
    {
        p = p * base;
    }

    return p;
}

int main()
{

    int i = 0;
    for (; i < 10; i++)
    {
        printf("current index = %d power(2,%d) = %d power(-3,%d) = %d\n", i, i, power(2, i), i, power(-3, i));
    }

    printf("power2(2,1) = %d\n", power2(2, 1));
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
