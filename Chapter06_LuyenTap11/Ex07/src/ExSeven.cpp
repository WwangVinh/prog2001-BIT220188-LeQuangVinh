#include <stdio.h>
#include <string.h>

// Định nghĩa cấu trúc Product giống với cách định nghĩa Student trong slide
typedef struct {
    char name[50];
    float price;
} Product;

int main() {
    Product p1, p2;

    // Nhập thông tin Product 1
    printf("--- Nhap thong tin San pham 1 ---\n");
    printf("Ten: ");
    scanf(" %[^\n]", p1.name); // Đọc chuỗi có khoảng trắng
    printf("Gia: ");
    scanf("%f", &p1.price);

    // Nhập thông tin Product 2
    printf("\n--- Nhap thong tin San pham 2 ---\n");
    printf("Ten: ");
    scanf(" %[^\n]", p2.name);
    printf("Gia: ");
    scanf("%f", &p2.price);

    // So sánh giá của 2 Product
    printf("\n--- Ket qua so sanh ---\n");
    if (p1.price > p2.price) {
        printf("San pham '%s' dat hon san pham '%s'.\n", p1.name, p2.name);
    } else if (p1.price < p2.price) {
        printf("San pham '%s' re hon san pham '%s'.\n", p1.name, p2.name);
    } else {
        printf("Hai san pham co gia bang nhau (%.2f).\n", p1.price);
    }

    return 0;
}