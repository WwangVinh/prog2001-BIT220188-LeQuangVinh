#include <stdio.h>

int main() {
    int n, s = 0;
    printf("Nhap n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        s = s + i; // Cong don i vao s
    }

    printf("Tong S = %d\n", s);
    return 0;
}