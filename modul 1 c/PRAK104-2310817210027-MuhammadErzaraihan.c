#include <stdio.h>

int main() {
    printf("Harga sepatu A adalah 400000\n");
    printf("\n");
    printf("Harga sepatu B adalah 350000\n");
    printf("\n");

    int Harga_Sepatu_A = 400000;
    int Harga_Sepatu_B = 350000;

    int setelah_diskon_A = Harga_Sepatu_A;
    int diskon_A = 0;

    if (Harga_Sepatu_A >= 400000) {
        diskon_A = Harga_Sepatu_A - (Harga_Sepatu_A * 13) / 100;
    }

    int setelah_diskon_B = Harga_Sepatu_B;
    int diskon_B = 0;

    if (Harga_Sepatu_B >= 350000) {
        diskon_B = Harga_Sepatu_B - (Harga_Sepatu_B * 21) / 100;
    }

    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi : %d\n", diskon_A);
    printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi : %d\n", diskon_B);

    return 0;
}