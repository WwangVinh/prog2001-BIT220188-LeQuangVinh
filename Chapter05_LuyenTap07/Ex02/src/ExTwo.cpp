#include <stdio.h>

typedef struct { int val, idx; } Result;

Result timMax(int a[], int n) {
    if (n == 1) return (Result){a[0], 0};
    Result res = timMax(a, n - 1);
    if (a[n - 1] > res.val) return (Result){a[n - 1], n - 1};
    return res;
}

int main() {
    int arr[] = {1, 9, 3, 7, 5};
    Result m = timMax(arr, 5);
    printf("Max: %d tai Index: %d", m.val, m.idx);
    return 0;
}