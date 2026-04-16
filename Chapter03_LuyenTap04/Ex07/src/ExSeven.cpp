#include <stdio.h>

int main() {
    int n;
    do {
        printf("Nhap mot so trong khoang 1-100: ");
        scanf("%d", &n);

        if (n < 1 || n > 100) {
            printf("Sai roi! Vui long nhap lai.\n");
        }
    } while (n < 1 || n > 100); // Tiep tuc lap neu so nhap vao nam ngoai khoang

    printf("Cam on! Ban da nhap dung so %d.\n", n);
    return 0;
}