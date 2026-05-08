#include <stdio.h>
#include <ctype.h> // Thu vien ho tro xu ly ky tu

int main() {
    char c;

    printf("Nhap vao mot ky tu: ");
    scanf("%c", &c);

    // Kiem tra neu la ky tu so
    if (isdigit(c)) {
        printf("Ky tu so la: %c\n", c);
    }
    // Kiem tra neu la ky tu chu cai
    else if (isalpha(c)) {
        printf("Ky tu chu la: %c\n", toupper(c));
    }
    // Truong hop la cac ky tu dac biet khac
    else {
        printf("Day khong phai la ky tu so hay chu cai.\n");
    }

    return 0;
}