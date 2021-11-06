// ret_ptr.c
// Created by daheige on 2021/11/6.

#include <string.h>
#include "ret_ptr.h"

// 字符串数组
static const char *msg[] = {"Sunday", "Monday", "Tuesday", "Wednesday",
                          "Thursday", "Friday", "Saturday"};
char *get_a_day(int idx){
    static  char buf[20]; // 这里声明为静态变量，当函数调用后，这个变量就会被缓存起来
    // 再次调用的时候，将返回相同的值
    strcpy(buf,msg[idx]);

    return buf;
}

