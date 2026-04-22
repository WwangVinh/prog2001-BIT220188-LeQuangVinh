#include <stdio.h>
#include <ctype.h> // Thư viện hỗ trợ hàm isdigit()

int main() {
    FILE *fIn, *fOut;
    char ch;
    int count = 0;

    fIn = fopen("D:\\prog2001-BIT220188-LeQuangVinh\\Chapter06_LuyenTap09\\Ex02\\src\\vanban.txt", "r");
    if (fIn == NULL) return 1;

    while ((ch = fgetc(fIn)) != EOF) {
        if (isdigit(ch)) {
            count++;
        }
    }
    fclose(fIn);

    fOut = fopen("ketqua_con_so.txt", "w");
    fprintf(fOut, "Tong so ky tu con so la: %d", count);
    fclose(fOut);

    printf("Da dem xong %d con so va luu vao file ketqua_con_so.txt\n", count);
    return 0;
}