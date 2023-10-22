// memory内存管理
// Created by daheige on 2023/10/22.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char name[100]; // 定义字符串数组，可容纳100个字符
    char *desc; // 如果您预先不知道需要存储的文本长度,这里定义一个指针，这个指针指向为未定义所需的内存大小的字符
    strcpy(name,"c lang,hello,world");

    // 使用malloc函数动态分配内存空间
//    desc = (char *)malloc(100 * sizeof(char)); // 分配200个字符的空间
    // 也可以使用 calloc() 来分配内存
    desc = calloc(100,sizeof(char)); // 分配内存

    if (desc == NULL){
        fprintf(stderr,"Error - unable to allocate required memory\n");
    }else{
        strcpy(desc,"hello,world,i learn c lang");
    }

    printf("name = %s\n",name);
    printf("desc = %s\n",desc);

    // 存储更大的描述信息,使用realloc重新分配更大的内存到指定的newsize大小
    desc = (char *) realloc(desc,100 * sizeof(char));
    if (desc == NULL){
        fprintf(stderr,"Error - unable to allocate required memory\n");
    }else{
        strcat(desc,"she is in class 10th.");
    }

    printf("desc = %s\n",desc);

    // 当不再使用后，使用free()函数释放内存
    // 用于释放先前分配的内存。它接受一个指向要释放内存的指针作为参数，并将该内存标记为未使用状态
    free(desc);
    desc = NULL; // 手动置为NULL

    return 0;
}
