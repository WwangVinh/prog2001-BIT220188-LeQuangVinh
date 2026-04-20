#include <stdio.h>

// 1. Truyen tham tri (Value): Gia tri goc KHONG bi thay doi
void tangMot_Value(int x) {
    x = x + 1;
}

// 2. Truyen tham chieu/con tro (Pointer): Gia tri goc SE bi thay doi
void tangMot_Pointer(int *x) {
    *x = *x + 1;
}

int main() {
    int n = 10;

    tangMot_Value(n);
    printf("Sau khi truyen tham tri: n = %d\n", n); // Van la 10

    tangMot_Pointer(&n);
    printf("Sau khi truyen con tro: n = %d\n", n); // Da thanh 11

    return 0;
}