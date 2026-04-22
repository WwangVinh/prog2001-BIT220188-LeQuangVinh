#include <stdio.h>
#include <ctype.h> // Thư viện hỗ trợ hàm isalpha()

int main() {
    FILE *fIn, *fOut;
    char ch;
    int count = 0;

    fIn = fopen("D:\\prog2001-BIT220188-LeQuangVinh\\Chapter06_LuyenTap09\\Ex02\\src\\vanban.txt", "r");
    if (fIn == NULL) return 1;


    while ((ch = fgetc(fIn)) != EOF) {
        if (isalpha(ch)) {
            count++;
        }
    }
    fclose(fIn);

    // Ghi kết quả ra file mới
    fOut = fopen("ketqua_chu_cai.txt", "w");
    fprintf(fOut, "Tong so ky tu chu cai la: %d", count);
    fclose(fOut);

    printf("Da dem xong %d chu cai va luu vao file ketqua_chu_cai.txt\n", count);
    return 0;
}