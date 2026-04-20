#include <stdio.h>

void chuyenVi(int A[2][2], int T[2][2], int r, int c) {
    if (r >= 2) return;
    T[c][r] = A[r][c];
    if (c == 1) chuyenVi(A, T, r + 1, 0);
    else chuyenVi(A, T, r, c + 1);
}

int main() {
    int A[2][2] = {{1, 2}, {3, 4}}, T[2][2];
    chuyenVi(A, T, 0, 0);
    for(int i=0; i<2; i++) {
        for(int j=0; j<2; j++) printf("%d ", T[i][j]);
        printf("\n");
    }
    return 0;
}