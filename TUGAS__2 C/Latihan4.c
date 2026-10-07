#include <stdlib.h>
#include <stdio.h>

int main () {
char huruf_awal = 'z';
char awal = 'y', pilihan = 'y';

 printf("Masukan huruf awal: ");
 scanf(" %c", &huruf_awal);

 fflush(stdin);
 printf("Masukan huruf untuk pilihan (y/t): ");
 scanf(" %c", &pilihan);

 fflush(stdin);
 printf("huruf awal : %c\n", huruf_awal);
 printf("pilihan : %c\n", pilihan);

return 0;
}