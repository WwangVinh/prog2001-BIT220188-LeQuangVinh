#include <stdio.h>

// Ham de quy tinh n giai thua (n!)
long long giaiThua(int n) {
    if (n == 0 || n == 1) return 1; // Diem dung
    return n * giaiThua(n - 1);    // Buoc de quy
}

int main() {
    int n = 5;
    printf("Giai thua cua %d la: %lld\n", n, giaiThua(n));
    return 0;
}