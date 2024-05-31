//
// Created by Administrator on 2024/5/31.
//
#include <stdio.h>
#include <stdlib.h>
#define N 40

typedef int ElemType;

void Merge(ElemType * A, int low, int mid, int high){
//    ElemType * B = (ElemType *)malloc(sizeof(ElemType));
    static ElemType B[N];
    int i, j, k;
    mid = (low + high) / 2;
    // 先复制一份
    for(k = low; k <= high; k++) B[k] = A[k];
    for (i = low, j = mid + 1, k = i; i <= mid && j <= high; k++){
        if(B[i] <= B[j])
            A[k] = B[i++];
        else
            A[k] = B[j++];
    }
    while (i <= mid)
        A[k++] = B[i++];
    while (j <= high)
        A[k++] = B[j++];
}

void MergeSort(ElemType * A, int low, int high){
    if(low < high){
        int mid = (low + high) / 2;
        MergeSort(A, low, mid);
        MergeSort(A, mid + 1, high);
        Merge(A, low, mid, high);
    }
}

int main(){
    int arr[8] = {11,9,15,19,2, 6, 3, 1};
    MergeSort(arr, 0, 7);
    for (int i = 0; i < 8; ++i) {
        printf("%d ", arr[i]);
    }
    return 0;
}