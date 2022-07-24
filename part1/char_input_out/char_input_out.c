#include <stdio.h>

/*
% ./a.out
1233
1233
12234
12234
123556
123556
q
*/

int main()
{
    // char c = getchar()

    // putchar(c) // 打印字符

    // 把输入的字符串输出
    // 字符在键盘，屏幕或其他的任何地方都是在机器内部以bit位模式存储的。
    // char类型专门用于存储这种字符类型数据，当然任何整型int也可以用于存储
    // 字符类型数据
    // 声明c的时候，必须让它大到足以存放getchar函数返回到任何值
    // 能存储任何可能的字符外还需要存储结束符号EOF，所以这里声明为int类型
    // int c;
    // c = getchar();
    // 输入结束符EOF 表示文件end of file EOF定义在<stdio.h>中时一个整型数字 int -1
    // while (c != EOF)
    // {
    //     if (c == 'q')
    //     {
    //         break;
    //     }

    //     putchar(c);
    //     c = getchar();
    // }

    long nc;
    int c, nl = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == 'q')
        {
            break;
        }

        if (c != '\n')
        {
            ++nl; // 统计行数
        }

        ++nc;
        putchar(c);
    }

    printf("you input %d line\n", nl);
    printf("you input %ld char\n", nc);

    return 0;
}