#include <stdio.h>

int demKyTu(char *s, char x) {
    if (*s == '\0') return 0;
    int count = (*s == x) ? 1 : 0;
    return count + demKyTu(s + 1, x);
}

int main() {
    char s[] = "hello ni";
    printf("So ky tu 'l': %d", demKyTu(s, 'l'));
    return 0;
}