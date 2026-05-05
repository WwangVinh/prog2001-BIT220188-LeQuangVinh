#include <stdio.h>

int main() {
    int a, b, n;
    long long sum = 0;

    printf("Nhap a, b, n (voi a, b < n): ");
    scanf("%d %d %d", &a, &b, &n);

    // Kiểm tra điều kiện đầu vào
    if (a >= n || b >= n || a <= 0 || b <= 0) {
        printf("Vui long nhap cac so nguyen duong thoa man dieu kien a, b < n.\n");
        return 1;
    }

    // Duyệt qua các số nguyên dương nhỏ hơn n
    for (int i = 1; i < n; i++) {
        if (i % a == 0 && i % b != 0) {
            sum += i;
        }
    }

    printf("Tong cac so thoa man dieu kien la: %lld\n", sum);

    return 0;
}