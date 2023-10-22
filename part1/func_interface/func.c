#include <stdio.h>
#include <stdarg.h> // 导入可变参数的头文件

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

void delete_char(char s[],int c);

// 函数可变参数：声明格式 int func_name(int arg1, ...);
double avg(int num,...){
    va_list vaList; // 存放可变参数列表
    double sum = 0.0;
    int i;
    // 为num个参数初始化valist
    va_start(vaList,num);
    // 访问所有可变参数列表
    for(int i=0;i<num;i++){
        sum += va_arg(vaList,int); // va_arg获取可变参数列表中的下一个参数
    }
    // 清理可变参数内存,vaList是一个 va_list 类型的变量。该宏将 ap 置为 NULL
    va_end(vaList);

    return sum / num;
}

int main()
{

    int i = 0;
    for (; i < 10; i++)
    {
        printf("current index = %d power(2,%d) = %d power(-3,%d) = %d\n", i, i, power(2, i), i, power(-3, i));
    }

    printf("power2(2,1) = %d\n", power2(2, 1));

    // 删除某个字符
    char a[] = "hello";
    delete_char(a,'h');
    printf("after delete_char %s\n",a);

    printf("avg(2,3,4,5) = %f\n", avg(4,2,3,4,5));

    return 0;
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

void delete_char(char s[],int c){
    int i = 0,j = 0;
    for(;s[i] != '\0';i++){
        if(s[i] != c){
            s[j] = s[i];
            j++;
        }
    }

    s[j] = '\0';
}
