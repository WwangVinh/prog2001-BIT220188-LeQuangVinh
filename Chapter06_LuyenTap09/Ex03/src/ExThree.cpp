#include <stdio.h>

int main() {
    FILE *fptr;
    char buffer[100];

    fptr = fopen("D:\\prog2001-BIT220188-LeQuangVinh\\Chapter06_LuyenTap09\\Ex02\\src\\vanban.txt", "r");

    if (fptr == NULL) {
        printf("Loi: Khong tim thay file!\n");
        return 1;
    }

    printf("Noi dung trong file la:\n");
    // Đọc từng dòng cho đến khi hết file [cite: 291, 308]
    while (fgets(buffer, sizeof(buffer), fptr) != NULL) {
        printf("%s", buffer);
    }

    fclose(fptr);
    return 0;
}