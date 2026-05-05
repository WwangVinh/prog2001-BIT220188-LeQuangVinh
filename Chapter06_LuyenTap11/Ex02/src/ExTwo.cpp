#include <stdio.h>

int main() {
    printf("--- BANG CUU CHUONG TU 2 DEN 9 ---\n");
    for (int i = 2; i <= 9; i++) {
        printf("\nBang cuu chuong %d:\n", i);
        for (int j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
    }
    return 0;
}