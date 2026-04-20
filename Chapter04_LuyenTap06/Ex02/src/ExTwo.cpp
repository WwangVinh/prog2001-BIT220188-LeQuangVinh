#include <stdio.h>

int tinhTong(int a[], int n) {
    if (n <= 0) return 0;
    return a[n - 1] + tinhTong(a, n - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    printf("Tong mang: %d", tinhTong(arr, 5));
    return 0;
}