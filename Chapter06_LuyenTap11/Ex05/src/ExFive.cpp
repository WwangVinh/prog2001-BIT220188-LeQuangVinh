#include <stdio.h>

int main() {
    int n;
    long long sum = 0;

    printf("Nhap n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += (long long)i * i;
    }

    printf("Tong day S la: %lld\n", sum);

    return 0;
}