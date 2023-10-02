#include <stdio.h>

int main(){
    
    int a = 4;
    int b = 8;
   int c = 3;

    printf("Variabel a bernilai : %d\n",a);
    printf("Variabel b bernilai : %d\n",b);
    printf("Variabel c bernilai : %d\n",c);
    printf("  \n");

   double Operasi =(double) (a*b)/c;

    printf("Hasil dari a dikali b dibagi c adalah :\n ");
    printf("%d * %d / %d = %.6lf\n", a, b, c, Operasi);
  
    return 0;
}