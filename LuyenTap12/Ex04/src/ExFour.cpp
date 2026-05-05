#include <stdio.h>

// Hàm tìm giá trị nhỏ nhất
int tim_gia_tri_nho_nhat(int arr[], int n) {
    int min = arr[0]; // Giả sử phần tử đầu tiên là nhỏ nhất
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i]; // Cập nhật min nếu tìm thấy giá trị nhỏ hơn
        }
    }
    return min;
}

int main() {
    // Khai báo và khởi tạo mảng ví dụ
    int mang[] = {15, 22, 9, 31, 7, 40};
    int so_luong = sizeof(mang) / sizeof(mang[0]); // Tính số phần tử của mảng

    int min = tim_gia_tri_nho_nhat(mang, so_luong);

    printf("Mang hien tai: ");
    for(int i = 0; i < so_luong; i++) {
        printf("%d ", mang[i]);
    }

    printf("\nGia tri nho nhat trong mang la: %d\n", min);

    return 0;
}