#include <stdio.h>

/**
 * @brief 统计各个数字、空白符及其他字符出现的次数
 * @author daheige
 */
int main()
{
    int c, i, nwhite, nother;
    int ndigit[10];      // int类型的数组
    nwhite = nother = 0; // 初始化赋值
    while ((c = getchar()) != EOF)
    {
        if (c == 'q')
        {
            break;
        }

        if (c >= '0' && c <= '9')
        {
            ++ndigit[c - '0'];
        }
        else if (c == ' ' || c == '\n' || c == '\t')
        {
            ++nwhite; // 空白符
        }
        else
        {
            ++nother;
        }
    }

    printf("digits = ");
    for (i = 0; i < 10; ++i)
    {
        printf(" %d", ndigit[i]);
    }

    printf(",white space = %d,other = %d\n", nwhite, nother);
}