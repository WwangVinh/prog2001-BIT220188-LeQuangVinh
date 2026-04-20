#include <stdio.h>

void tongMaTran(int A[2][2], int B[2][2], int C[2][2], int r, int c) {
    if (r >= 2) return;
    C[r][c] = A[r][c] + B[r][c];
    if (c == 1) tongMaTran(A, B, C, r + 1, 0);
    else tongMaTran(A, B, C, r, c + 1);
}

int main() {
    int A[2][2] = {{1, 1}, {2, 2}}, B[2][2] = {{3, 3}, {4, 4}}, C[2][2];
    tongMaTran(A, B, C, 0, 0);
    for(int i=0; i<2; i++) {
        for(int j=0; j<2; j++) printf("%d ", C[i][j]);
        printf("\n");
    }
    return 0;
}