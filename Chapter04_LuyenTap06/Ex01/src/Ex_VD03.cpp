#include <stdio.h>

// Ham nay chi ton tai trong file nay, file khac khong goi duoc
static void hamBiMat() {
    printf("Day la ham noi bo (static), ben ngoai khong thay duoc.\n");
}

int main() {
    hamBiMat();
    return 0;
}