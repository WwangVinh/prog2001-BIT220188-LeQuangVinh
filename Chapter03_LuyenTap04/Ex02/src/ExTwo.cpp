#include <stdio.h>

int main() {
    float a, b;
    printf("Nhap he so a va b (ax + b = 0): ");
    scanf("%f %f", &a, &b);

    if (a == 0) {
        if (b == 0) {
            printf("Phuong trinh co vo so nghiem.\n");
        } else {
            printf("Phuong trinh vo nghiem.\n");
        }
    } else {
        float x = -b / a;
        printf("Nghiem cua phuong trinh la x = %.2f\n", x);
    }
    return 0;
}