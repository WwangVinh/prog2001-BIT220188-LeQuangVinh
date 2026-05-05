#include <stdio.h>

int main() {
    int N;
    long long sum = 0;

    printf("Nhap so nguyen duong N: ");
    scanf("%d", &N);

    int count = 0;
    int current_number = 1;

    while (count < N) {
        sum += current_number;
        current_number += 2; // Số lẻ tiếp theo
        count++;
    }

    printf("Tong cua %d so le dau tien la: %lld\n", N, sum);

    return 0;
}