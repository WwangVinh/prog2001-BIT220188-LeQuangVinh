
#include<stdio.h>

struct Employee {
    int id;
    char ten[50];
    float luong;
};

int main() {
    struct Employee dsNhanVien[3] = {
        {101, "Nguyen Van A", 10000000},
        {102, "Nguyen Van B", 11000000},
        {103, "Nguyen Van C", 12000000}
    };

    printf("Danh sach nhan vien: \n");
    printf("%s | %s | %s", "ID", "Ten", "Luong");
    printf("\n");

    for(int i = 0; i < 3; i++) {
        printf("%d | %s | %.2fVND\n", dsNhanVien[i].id, dsNhanVien[i].ten, dsNhanVien[i].luong);
    }

    return 0;
}