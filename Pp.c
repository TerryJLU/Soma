#include <stdio.h>

// 函数声明
void bubbleSort(int arr[], int n);

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr, n);

    printf("Sorted array: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

// 实现冒泡排序的函数
void bubbleSort(int arr[], int n) {
   int i, j, temp;
   for (i = 0; i < n-1; i++) {

       // Last i elements are already in place
       for (j = 0; j < n-i-1; j++) {
           if (arr[j] > arr[j+1]) {
               // 交换 temp 和 arr[i]
               temp = arr[j];
               arr[j] = arr[j+1];
               arr[j+1] = temp;
           }
       }
   }
}
