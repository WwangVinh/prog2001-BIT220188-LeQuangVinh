#include <stdio.h>

int main() {
    int n, soDaoNguoc = 0;
    printf("Nhap mot so: ");
    scanf("%d", &n);

    while (n != 0) {
        int chuSo = n % 10;           // Lay chu so cuoi cung
        soDaoNguoc = soDaoNguoc * 10 + chuSo; // Day vao so dao nguoc
        n = n / 10;                   // Xoa chu so cuoi cung
    }

    printf("So sau khi dao nguoc: %d\n", soDaoNguoc);
    return 0;
}