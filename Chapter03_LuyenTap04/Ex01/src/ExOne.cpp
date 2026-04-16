#include <stdio.h>

int main() {
    int a, b, c, min;
    printf("Nhap 3 so nguyen a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a <= b && a <= c) {
        min = a; // a nho nhat
    }
    else if (b <= a && b <= c) {
        min = b; // b nho nhat
    }
    else {
        min = c; // c nho nhat
    }

    printf("Gia tri nho nhat dung if-else la: %d\n", min);
    return 0;
}