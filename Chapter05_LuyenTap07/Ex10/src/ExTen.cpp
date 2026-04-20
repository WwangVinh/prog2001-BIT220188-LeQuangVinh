#include <stdio.h>
#include <string.h>

void daoChuoi(char *s, int start, int end) {
    if (start >= end) return;
    char temp = s[start];
    s[start] = s[end];
    s[end] = temp;
    daoChuoi(s, start + 1, end - 1);
}

int main() {
    char s[] = "Dequy";
    daoChuoi(s, 0, strlen(s) - 1);
    printf("Chuoi dao nguoc: %s", s);
    return 0;
}