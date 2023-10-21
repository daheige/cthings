// 自定义header头
// 将函数签名，常量，结构体定义，全局变量等定义声明在头文件中
// 一般来说，不会将全局变量的定义写在头文件中，因为如果多个c源文件都添加了头文件，那很容易引起重定义的问题，
// 这时候一般编译器都会提示。正确的作法是在c源文件中定义一个全局变量。
// 在头文件中加入全局变量的声明。
// 头文件只是声明，不把具体实现放在头文件中，而是将具体实现放在跟头文件相同的源代码文件中
//
// 一般来说，文件中包含了函数，变量或类的声明。
// 如果是动态库的头文件，那么会包含导出函数或导出类的声明。头文件是动态编译的产物。
// 自定义头文件通常放在使用该头文件的源文件所在的目录中

// 判断是否定义过该头文件
#ifndef CTHINGS_MY_HEADER_H
#define CTHINGS_MY_HEADER_H
#include <stdint.h>

int max(int,int);
int my_read_count;
const int LIMIT_TIMES;

// 自定义结构体
typedef struct {
    char *name;
    int8_t age;
} Person;

// 这里的int8_t是跨平台的数据类型定义，放在 stdint.h header头中
Person make_person(char *,const int8_t);
void person_show(const Person *);

#endif

