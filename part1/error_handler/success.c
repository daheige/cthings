// 程序退出码
// Created by daheige on 2023/10/22.
#include <stdlib.h>
#include <stdio.h>

int main(){
    int div_num = 20;
    int divisor = 5;
    int result;

    if (divisor == 0){
        fprintf(stderr,"除数不能为0");
        exit(EXIT_FAILURE);
    }

    result = div_num / divisor;
    printf("res:%d",result);

    return 0;
}
