#include <stdio.h>



    //Ham su dung bien thuong
    void incrementNormal() {
        int counter = 0; // luon bij reset ve 0 moi khi goi ham
        counter++;
        printf("Bien thuong: %d\n", counter);
    }

    //Ham su dung bien static
    void incrementStatic() {
        static int counter = 0; // chi khoi tao 1 lan duy nhat sau do se giu gia tri
        counter++;
        printf("Bien Static: %d\n", counter);
    }

    int main() {

        printf("Goi ham lan: 1\n");
        incrementNormal();
        incrementStatic();

        printf("Goi ham lan: 2\n");
        incrementNormal();
        incrementStatic();

        printf("Goi ham lan: 3\n");
        incrementNormal();
        incrementStatic();

        return 0;



    }
