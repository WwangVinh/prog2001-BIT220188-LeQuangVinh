#include <stdio.h>

// Struct con
struct Owner {
    char ten[50];
    int tuoi;
};

// Struct cha
struct Car {
    char model[30];
    int nam;
    struct Owner chuXe; 
};

int main() {
    // Khởi tạo biến struct Car
    struct Car myCar = {
        "VinFast VF8",
        2023,
        {"Nguyen Hoang Nam", 30} // Khởi tạo luôn struct con bên trong
    };

    // In thông tin
    printf("--- Thong tin Xe ---\n");
    printf("Model: %s\n", myCar.model);
    printf("Nam san xuat: %d\n", myCar.nam);

    printf("--- Thong tin Chu xe ---\n");
    printf("Ten chu xe: %s\n", myCar.chuXe.ten);
    printf("Tuoi: %d\n", myCar.chuXe.tuoi);

    return 0;
}