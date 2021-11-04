#include<stdio.h>
#include<limits.h>
#include<float.h>

int main(void){
    printf("int size:%lu \n",sizeof(int));
    printf("float min:%E\n",FLT_MIN);
    printf("float max:%E\n",FLT_MAX);
    printf("精度值: %d\n",FLT_DIG);

    return 0;
}

