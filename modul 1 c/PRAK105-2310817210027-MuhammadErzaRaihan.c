#include <stdio.h>

int main() {
    printf("Variabel a bernilai 9\n");
    printf("Variabel b bernilai 5\n");
    printf("Variabel x bernilai 8\n");
    printf("Variabel y bernilai 8\n");

    int a = 9 % 5 % 8 % 8;

    printf("Total sisa bagi dari a dibagi b dan x dibagi y adalah %d\n", a);

    return 0;
}
