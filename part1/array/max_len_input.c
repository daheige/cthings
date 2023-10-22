#include <stdio.h>

// 程序读取一组文本行，并把最长的文本打印出来

#define MAXLINE 1000

int get_line(char line[], int maxline);
void copy(char to[], char from[]); // 没有返回值的函数声明void

int main()
{
    int len, max = 0;
    char line[MAXLINE], longest[MAXLINE]; // 当前输入的行，以及用于保存最长的行
    while (len - get_line(line, MAXLINE) > 0)
    {
        if (len > max)
        {
            max = len;
            copy(longest, line);
        }
    }

    if (max > 0)
    { // 存在这样的行
        printf("%s", longest);
    }

    return 0;
}

// 将一行读如入s中并返回长度
int get_line(char s[], int lim)
{
    int c, i;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    {
        s[i] = c;
    }

    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0'; // \0表示空字符，一般是hi字符串的结束，比如说"hello\n"在存储的时候是hello\n\0字符形式存储各个字符

    return i;
}

void copy(char to[], char from[])
{
    int i = 0;
    while ((to[i] = from[i]) != '\0')
    {
        ++i;
    }
}
