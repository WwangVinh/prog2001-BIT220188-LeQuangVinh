#include <stdio.h>

int main() {
    float km;
    float tongTien = 0;

    printf("Nhap so km da di: ");
    scanf("%f", &km);

    if (km <= 0) {
        printf("So km khong hop le.\n");
        return 0;
    }

    // Tinh tien theo tung muc
    if (km <= 1) {
        tongTien = 15000; // Gia mo cua 1km dau tien (thường tính nguyên giá dù đi chưa đến 1km)
    } else if (km <= 5) {
        tongTien = 15000 + (km - 1) * 13000;
    } else {
        // 1km dau (15k) + 4km tiep theo (4 * 13k) + nhung km con lai (11k)
        tongTien = 15000 + 4 * 13000 + (km - 5) * 11000;
    }

    // Giam gia 10% neu di tren 120km
    if (km > 120) {
        tongTien = tongTien * 0.9;
    }

    printf("Tong tien taxi la: %.0f VNĐ\n", tongTien);

    return 0;
}