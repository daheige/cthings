// sort排序算法
// Created by daheige on 2023/10/22.

#include <stdio.h>

// 冒泡排序,从小到排序
void bubble_sort(int arr[],int len){
    int i,j,temp;
    for(i = 0;i<len -1;i++){
        for(j = 0;j<len -1 -i;j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 选择排序（Selection sort）是一种简单直观的排序算法。它的工作原理如下。
// 首先在未排序序列中找到最小（大）元素，存放到排序序列的起始位置，然后，
// 再从剩余未排序元素中继续寻找最小（大）元素，然后放到已排序序列的末尾。
// 以此类推，直到所有元素均排序完毕
void selection_sort(int a[],int len){
    int i,j,temp;
    for(i = 0;i<len-1;i++){
        int min = i;// 记录最小值的索引为止，第一个元素默认最小
        for(j = i+1;j<len;j++){
            if(a[j]<a[min]){
                min =j; //如果小于最小的，就改变min
            }
        }

        if(min !=i){
            swap(&a[min],&a[i]);
        }
    }
}

void print_array(int *arr,int len){
    for (int i =0;i<len;i++){
        printf("current item:%d\n",arr[i]);
    }
}

// 递归模式的快速排序
// 默认中间的那个值最小
void quick_sort_recursive(int arr[], int start, int end) {
    if (start >= end)
        return;
    int mid = arr[end];
    int left = start, right = end - 1;
    while (left < right) {
        while (arr[left] < mid && left < right)
            left++;
        while (arr[right] >= mid && left < right)
            right--;
        swap(&arr[left], &arr[right]);
    }

    if (arr[left] >= arr[end])
        swap(&arr[left], &arr[end]);
    else
        left++;
    if (left)
        quick_sort_recursive(arr, start, left - 1);
    quick_sort_recursive(arr, left + 1, end);
}

void quick_sort(int arr[], int len) {
    quick_sort_recursive(arr, 0, len - 1);
}

int main(){
    int arr[] = {12,34,32,55,87,90,8,78,23,37,5,67,89};
    int len = (int) sizeof(arr) / sizeof(arr[0]);
//    int len = (int) sizeof(arr) / sizeof(*arr);
    printf("array len:%d\n",len);

    bubble_sort(arr,len);
    print_array(arr,len);

    printf("====selection sort===\n");
    int arr2[] = {12,34,32,55,87,90,8,78,23,37,5,67,89};
    int arr2_len = (int) sizeof(arr2) / sizeof(arr2[0]);
    // 选择性排序
    selection_sort(arr2,arr2_len);
    print_array(arr2,arr2_len);

    printf("====quick_sort===\n");
    int arr3[] = {12,34,32,55,87,90,8,78,23,37,5,67,89};
    int size = (int) sizeof(arr3) / sizeof(arr3[0]);
    quick_sort(arr3,size);
    print_array(arr3,size);

    return 0;
}
