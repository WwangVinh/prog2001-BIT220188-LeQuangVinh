#include <stdio.h>

// Hàm sắp xếp mảng giảm dần (sử dụng thuật toán Bubble Sort cơ bản)
void sap_xep_giam_dan(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                // Hoán đổi 2 phần tử nếu phần tử trước nhỏ hơn phần tử sau
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// Hàm hỗ trợ in mảng ra màn hình
void in_mang(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int mang[] = {5, 12, 3, 8, 20, 1};
    int so_luong = sizeof(mang) / sizeof(mang[0]);

    printf("Mang truoc khi sap xep: ");
    in_mang(mang, so_luong);

    // Gọi hàm sắp xếp
    sap_xep_giam_dan(mang, so_luong);

    printf("Mang sau khi sap xep giam dan: ");
    in_mang(mang, so_luong);

    return 0;
}