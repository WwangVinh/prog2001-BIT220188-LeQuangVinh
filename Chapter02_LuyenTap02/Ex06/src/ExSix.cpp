#include <stdio.h>

int main() {
    int a, b;
    printf("Nhap so a: ");
    scanf("%d", &a);
    printf("Nhap so lan dich b: ");
    scanf("%d", &b);
    
    int dich_trai = a << b;
    int dich_phai = a >> b;
    
    printf("Gia tri cua a sau khi dich trai %d lan: %d\n", b, dich_trai);
    printf("Gia tri cua a sau khi dich phai %d lan: %d\n", b, dich_phai);
    
    return 0;
}