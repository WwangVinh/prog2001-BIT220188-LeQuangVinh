#include <stdio.h>

struct Employee {
    int id;
    char ten[50];
    float luong;
};

int main() {
    // Khởi tạo mảng gồm 3 nhân viên
    struct Employee dsNhanVien[3] = {
        {101, "Tran Thi B", 1500.50},
        {102, "Le Van C", 2000.00},
        {103, "Pham Minh D", 1800.75}
    };

    printf("--- Danh sach Nhan vien ---\n");
    printf("%-5s | %-15s | %-10s\n", "ID", "Ho Ten", "Luong");
    printf("------------------------------------------\n");

    for(int i = 0; i < 3; i++) {
        printf("%-5d | %-15s | %-10.2f$\n",
                dsNhanVien[i].id,
                dsNhanVien[i].ten,
                dsNhanVien[i].luong);
    }

    return 0;
}