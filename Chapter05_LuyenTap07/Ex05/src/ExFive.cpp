#include <stdio.h>

void inMaTran(int a[2][2], int r, int c) {
    if (r >= 2) return;
    printf("%d\t", a[r][c]);
    if (c == 1) {
        printf("\n");
        inMaTran(a, r + 1, 0);
    } else {
        inMaTran(a, r, c + 1);
    }
}

int main() {
    int mt[2][2] = {{1, 2}, {3, 4}};
    inMaTran(mt, 0, 0);
    return 0;
}