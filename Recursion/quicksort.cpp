//
// Created by Administrator on 2024/5/31.
//

#include <stdio.h>

int Partition(int arr[], int low, int high){
    int pivot = arr[low];
    while (low < high){
        while(low < high && arr[high] >= pivot)
            high--;
        arr[low] = arr[high];
        while(low < high && arr[low] <= pivot)
            low++;
        arr[high] = arr[low];
    }
    arr[low] = pivot;
    return low;
}

void QuickSort(int * arr, int low, int high){
    if(low < high){
        int pivot = Partition(arr, low, high);
        QuickSort(arr, low, pivot - 1);
        QuickSort(arr, pivot + 1, high);
    }
}

int main(){
    int arr[8] = {11,9,15,19,2, 6, 3, 1};
    QuickSort(arr, 0, 7);
    for (int i = 0; i < 8; ++i) {
        printf("%d ", arr[i]);
    }
    return 0;
}