#include <stdio.h>

int main() {
    FILE *fptr1, *fptr2;

    fptr1 = fopen("file_cung_thu_muc.txt", "w");
    if (fptr1 != NULL) {
        printf("Da tao file trong cung thu muc.\n");
        fclose(fptr1);
    }

    fptr2 = fopen("C:\\Users\\ad\\Downloads\\file_trong_o_c.txt", "w");
    if (fptr2 != NULL) {
        printf("Da tao file trong o C.\n");
        fclose(fptr2);
    } else {
        printf("Khong the tao file o o C (co the do quyen ghi hoặc thu muc ko ton tai).\n");
    }

    return 0;
}