#include <stdio.h>

// Hàm giải phương trình bậc nhất ax + b = 0
void giai_phuong_trinh_bac_nhat(float a, float b) {
    if (a == 0) {
        if (b == 0) {
            printf("Phuong trinh 0x + 0 = 0 co vo so nghiem.\n");
        } else {
            printf("Phuong trinh 0x + %.2f = 0 vo nghiem.\n", b);
        }
    } else {
        float x = -b / a;
        printf("Phuong trinh %.2fx + %.2f = 0 co nghiem x = %.2f\n", a, b, x);
    }
}

int main() {
    printf("--- Chay thu ham giai phuong trinh bac nhat ---\n");
    giai_phuong_trinh_bac_nhat(2, -4);  // Có 1 nghiệm
    giai_phuong_trinh_bac_nhat(0, 5);   // Vô nghiệm
    giai_phuong_trinh_bac_nhat(0, 0);   // Vô số nghiệm

    return 0;
}