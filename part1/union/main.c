// union 联合
// Created by daheige on 2023/11/5.

#include <stdio.h>

// 联合提供来一种方式，可以在单块存储区中管理不同类型的数据，而不需要在程序中嵌入任何同机器有关的信息
// 在不同的时刻保存不同的类型和长度的对象变量，编译器负责跟踪对象的长度和对齐要求。
union u_tag{
    int iVal;
    float fVal;
    char *sVal;
};

int main(){
    union u_tag u;
    u.iVal = 1;
    printf("union value:%d",u.iVal);

}
