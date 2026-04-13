#include <stdio.h>
#include <stdbool.h>

int main() {
    int a;
    float b;
    char c;
    int tempBool;

    printf("Nhap so nguyen: ");
    scanf("%d", &a);

    printf("Nhap so thuc: ");
    scanf("%f", &b);

    printf("Nhap mot ky tu: ");
    scanf(" %c", &c);

    printf("Nhap gia tri bool (1-True, 0-False): ");
    scanf("%d", &tempBool);

    printf("Ket qua: %d, %.2f, %c, %d\n", a, b, c, tempBool);

    return 0;
}
