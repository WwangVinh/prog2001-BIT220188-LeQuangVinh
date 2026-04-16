#include <stdio.h>

int main() {
    int i = 1;
    do {
        if (i % 3 == 0 && i % 7 == 0) {
            printf("So nguyen duong dau tien chia het cho 3 va 7 la: %d\n", i);
            break; // Thoat vong lap khi tim thay
        }
        i++;
    } while (1); // Vong lap chay cho den khi gap break
    return 0;
}