#include <stdio.h>

int main() {
    float diem;

    printf("Nhap diem so cua hoc sinh (0 - 10): ");
    scanf("%f", &diem);

    if (diem >= 0 && diem <= 10) {
        if (diem >= 9) {
            printf("Xuat sac\n");
        } else if (diem >= 8) {
            printf("Gioi\n");
        } else if (diem >= 6.5) {
            printf("Kha\n");
        } else if (diem >= 5) {
            printf("Trung binh\n");
        } else {
            printf("Yeu\n");
        }
    } else {
        printf("Diem khong hop le!\n");
    }

    return 0;
}