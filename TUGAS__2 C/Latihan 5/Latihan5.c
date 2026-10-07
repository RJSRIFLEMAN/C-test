#include <stdlib.h>
#include <stdio.h>

int main () {
int nomor =1, nim ;
float umur = 17.0 ;
char huruf_awal = 'a', awal, pilihan = 'a';

 printf("input nim (empat digit terakhir): ");
 scanf("%d", &nim);

 printf("masukan umur: ");
 scanf("%f", &umur);

 printf("masukan huruf awal: ");
 scanf(" %c", &huruf_awal);

 printf("masukan huruf untuk pilihan: ");
 scanf(" %c", &pilihan);
 
 printf("nomor : %d\n", nomor);

return 0;
}