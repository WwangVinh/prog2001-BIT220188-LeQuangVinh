#include <stdio.h>

void daoMang(int a[], int start, int end) {
    if (start >= end) return;
    int temp = a[start];
    a[start] = a[end];
    a[end] = temp;
    daoMang(a, start + 1, end - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    daoMang(arr, 0, 4);
    for(int i = 0; i < 5; i++) printf("%d ", arr[i]);
    return 0;
}