// array max
// Created by daheige on 2023/10/22.

#include <stdio.h>

int array_max(int *arr,int len){
    int i,largest;
    largest = arr[0];
    for (i = 1;i < len;i++){
        if(largest < arr[i]){
            largest = arr[i];
        }
    }

    return largest;
}

int main(){
    int arr[4] = {12,23,25,11};
    int len = (int) sizeof(arr) / sizeof(arr[0]);

    printf("max item:%d\n", array_max(arr,len));

    int i,n;
    int arr2[100];
    printf("输入元素个数(0-100):");
    scanf("%d",&n);
    printf("\n");

    // 接收用户输入
    for(i = 0;i<n;++i){
        printf("输入数字%d: ",i+1);
        scanf("%d",&arr[i]);
    }

    // 求最大值
    printf("max item:%d", array_max(arr2,n));

    return 0;
}

/*
 * 程序运行效果：
 * max item:25
 * 输入元素个数(0-100):3
 * 输入数字1: 123
 * 输入数字2: 234
 * 输入数字3: 456
 * max item:48
 */