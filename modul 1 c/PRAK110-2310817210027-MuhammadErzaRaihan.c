#include <stdio.h>
#include <math.h>

int main() {
    int alas = 5;  
    int tinggi = 12.0;  

    
    int sisi_miring = sqrt(alas * alas + tinggi * tinggi); 

    int keliling = alas + tinggi + sisi_miring;

    int luas = 0.5 * alas * tinggi;

    printf("Diketahui:\n");
    printf("Alas = %d cm\n", alas);
    printf("Tinggi = %d cm\n", tinggi);
    printf("\nJawab:\n");
    printf("Sisi A = %d cm\n", tinggi);
    printf("Sisi B = %d cm\n", sisi_miring);
    printf("Sisi C = %d cm\n", alas);
    printf("Keliling segitiga = %d cm\n", keliling);
    printf("Luas segitiga = %d cm\n", luas);

    return 0;
}
