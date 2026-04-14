#include <stdio.h>

int main() {
    int a, b;
    printf("Nhap hai so nguyen a va b: ");
    scanf("%d %d", &a, &b);
    
    printf("Tong: %d\n", a + b);
    printf("Hieu: %d\n", a - b);
    printf("Tich: %d\n", a * b);
    
    if (b != 0) {
        printf("Chia: %.2f\n", (float)a / b);
        printf("Chia lay du: %d\n", a % b);
    } else {
        printf("Loi: Khong the chia cho 0!\n");
    }
    
    return 0;
}