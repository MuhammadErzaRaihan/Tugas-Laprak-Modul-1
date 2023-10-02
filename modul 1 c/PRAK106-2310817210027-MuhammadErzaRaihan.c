#include <stdio.h>

int main() {
   
    int a = 4;
    int b = 8;
    int c = 3;

    printf("Variabel a bernilai %d\n", a);
    printf("Variabel b bernilai %d\n", b);
    printf("Variabel c bernilai %d\n", c);

    int A = (a == b) ? 0 : 0;
    int B = (b > c) ? 1 : 0;
    int C = (a != c) ? 1 : 0;

    printf("Apakah a sama dengan b ? jawabannya adalah %d\n", A);
    printf("Apakah b lebih besar dari c ? jawabannya adalah %d\n", B);
    printf("Apakah a tidak sama dengan c ? jawabannya adalah %d\n", C);

    return 0;
}
