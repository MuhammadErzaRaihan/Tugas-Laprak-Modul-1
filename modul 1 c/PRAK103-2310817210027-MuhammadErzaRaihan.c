#include <stdio.h>

int main(){
    
    int a = 9;
    int b = 6;
    int x = 10;
    int y = 7;

    a = 9;
    b = 6;
    x = 10;
    y = 7;

    printf("Variabel a bernilai : %d\n",a);
    printf("Variabel b bernilai : %d\n",b);
    printf("Variabel x bernilai : %d\n",x);
    printf("Variabel y bernilai : %d\n",y);
    printf("  \n");

   int j = a+b;
   int k = j*x;
   float l = (float)k/y;

    double number = l;
    printf("Hasil dari a ditambah b dikali x dan dibagi y adalah : %.2f\n" , number);
    
  
    return 0;
}