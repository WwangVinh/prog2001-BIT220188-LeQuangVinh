#include <stdio.h>

int timKiem(int a[], int n, int x) {
    if (n <= 0) return -1;
    if (a[n - 1] == x) return n - 1;
    return timKiem(a, n - 1, x);
}

int main() {
    int arr[] = {10, 20, 30, 40};
    printf("Vi tri cua 30: %d", timKiem(arr, 4, 30));
    return 0;
}