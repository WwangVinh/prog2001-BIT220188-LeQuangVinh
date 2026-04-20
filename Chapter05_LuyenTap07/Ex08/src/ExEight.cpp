#include <stdio.h>

int tinhDoDai(char *s) {
    if (*s == '\0') return 0; // Gặp ký tự kết thúc chuỗi
    return 1 + tinhDoDai(s + 1); // s + 1 là dịch con trỏ sang ký tự kế tiếp
}

int main() {
    char s[100];
    printf("Nhap chuoi: ");
    scanf("%s", s);
    printf("Do dai: %d", tinhDoDai(s));
    return 0;
}