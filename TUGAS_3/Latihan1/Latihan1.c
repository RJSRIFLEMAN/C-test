#include <stdio.h>
#include <string.h>

int main() {
   char barang[20];
   char alamat[30];
   strcpy(barang, "toko buku");
   printf("barang : %s\n", barang);

   printf("masukan alamat 1: ");
   scanf("%s", alamat); //cara pembacaan pertama
   printf("alamat 1 : %s\n", alamat);

   printf("masukan alamat 2: ");
   // fflush(stdin); //cara pembacaan kedua
   while(getchar() != '\n' && getchar() != EOF); //cara pembacaan kedua
   gets(alamat);
   printf("alamat 2 : %s\n", alamat);

   printf("masukan alamat 3: ");
   fflush(stdin); //cara pembacaan ketiga
   fgets (alamat,30,stdin);
   printf("alamat 3 : %s\n", alamat);
   
   return 0;
}