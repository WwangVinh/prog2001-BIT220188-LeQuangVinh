#include <stdio.h>

int main() {
    FILE *fptr;
    char text[255];

    // Mở file ở chế độ ghi ("w") [cite: 154]
    fptr = fopen("vanban.txt", "w");
    if (fptr == NULL) return 1;

    printf("Nhap mot doan van ban: ");
    // dung fgets để đọc được cả khoảng trắng từ bàn phím
    fgets(text, sizeof(text), stdin);

    // Ghi chuỗi vừa nhập vào file [cite: 155]
    fprintf(fptr, "%s", text);

    fclose(fptr);
    printf("Ghi file thanh cong!\n");
    return 0;
}