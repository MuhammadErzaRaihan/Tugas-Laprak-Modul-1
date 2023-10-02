#include <stdio.h>
#include <math.h>

int main() {
    double alas = 5.0;  
    double tinggi = 12.0;  

    
    double sisi_miring = sqrt(alas * alas + tinggi * tinggi); 

    double keliling = alas + tinggi + sisi_miring;

    double luas = 0.5 * alas * tinggi;

    printf("Diketahui:\n");
    printf("Alas = %.1f cm\n", alas);
    printf("Tinggi = %.1f cm\n", tinggi);
    printf("\nJawab:\n");
    printf("Sisi A = %.1f cm\n", tinggi);
    printf("Sisi B = %.1f cm\n", sisi_miring);
    printf("Sisi C = %.1f cm\n", alas);
    printf("Keliling segitiga = %.1f cm\n", keliling);
    printf("Luas segitiga = %.1f cm^2\n", luas);

    return 0;
}