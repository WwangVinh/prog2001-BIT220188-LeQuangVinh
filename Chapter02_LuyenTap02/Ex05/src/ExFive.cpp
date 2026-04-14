#include <stdio.h>

int main() {
    int n;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &n);
    
    if (n >= 10 && n <= 50) {
        printf("%d nam trong khoang tu 10 den 50.\n", n);
    } else {
        printf("%d khong nam trong khoang tu 10 den 50.\n", n);
    }
    
    return 0;
}