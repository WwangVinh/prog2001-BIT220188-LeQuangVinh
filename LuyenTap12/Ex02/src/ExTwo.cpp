#include <stdio.h>

int main() {
    printf("Cac so nguyen tu 10 den 99 thoa man dieu kien la:\n");

    for (int i = 10; i <= 99; i++) {
        int hang_chuc = i / 10;     // Lấy chữ số hàng chục
        int hang_don_vi = i % 10;   // Lấy chữ số hàng đơn vị

        int tich = hang_chuc * hang_don_vi;
        int tong = hang_chuc + hang_don_vi;

        // Kiểm tra điều kiện: Tích = 2 * Tổng
        if (tich == 2 * tong) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}