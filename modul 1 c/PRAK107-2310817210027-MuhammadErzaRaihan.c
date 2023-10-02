#include <stdio.h>

int main(){
    int a = 4 ;
    int b = 5 ;
    int c = 7 ;

   
int Harga_tanah_per_meter = 85000;
   int hasil = a + b + c;
   int hasilkeseluruhan = hasil * Harga_tanah_per_meter;

   printf("Diketahui: \n ");
   printf("Panjang sisi segitiga berturut-turut adalah %d, %d, %d\n", a, b, c);
   printf("Keliling Tanah Pak Dengklek adalah %d\n", hasil);
   printf("Harga tanah per meter adalah %d\n",Harga_tanah_per_meter);
   printf("Jawaban : \n");
   printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d\n",hasilkeseluruhan);

   return 0;
}
