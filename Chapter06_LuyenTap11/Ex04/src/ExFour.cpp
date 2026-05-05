#include <stdio.h>

int main() {
    int N;
    int is_prime = 1;

    printf("Nhap so nguyen duong N: ");
    scanf("%d", &N);

    if (N < 2) {
        is_prime = 0;
    } else {
        for (int i = 2; i * i <= N; i++) {
            if (N % i == 0) {
                is_prime = 0;
                break;
            }
        }
    }

    if (is_prime) {
        printf("%d la so nguyen to.\n", N);
    } else {
        printf("%d khong phai la so nguyen to.\n", N);
    }

    return 0;
}