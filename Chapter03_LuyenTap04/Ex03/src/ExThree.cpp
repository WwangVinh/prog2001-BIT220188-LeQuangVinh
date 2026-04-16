#include <stdio.h>

int main() {
    int thu;
    printf("Nhap mot so tu 1 den 7: ");
    scanf("%d", &thu);

    switch (thu) {
        case 1: printf("Chu Nhat\n"); break;
        case 2: printf("Thu Hai\n"); break;
        case 3: printf("Thu Ba\n"); break;
        case 4: printf("Thu Tu\n"); break;
        case 5: printf("Thu Nam\n"); break;
        case 6: printf("Thu Sau\n"); break;
        case 7: printf("Thu Bay\n"); break;
        default: printf("Khong phai ngay trong tuan!\n");
    }
    return 0;
}