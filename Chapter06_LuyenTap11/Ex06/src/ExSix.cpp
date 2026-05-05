#include <stdio.h>

// Hàm đệ quy tính tổng bình phương
long long sum_of_squares(int n) {
    if (n == 1) {
        return 1;
    }
    return (long long)n * n + sum_of_squares(n - 1);
}

int main() {
    int n;

    printf("Nhap n: ");
    scanf("%d", &n);

    if (n >= 1) {
        printf("Tong day S la: %lld\n", sum_of_squares(n));
    } else {
        printf("Vui long nhap n >= 1\n");
    }

    return 0;
}
