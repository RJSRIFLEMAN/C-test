#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main() {
    int nomor;
    char nama[20];
    char jenis_kelamin;
    char Alamat[30];
    char Kota[20];

    printf("Masukan Nomor : ");
    scanf("%d", &nomor);

    printf("Masukan Nama : ");
    while (getchar() != '\n' && getchar() != EOF);
    fgets(nama, sizeof(nama), stdin);

    printf("Masukan Jenis Kelamin (L/P) : ");
    fflush(stdin);
    scanf(" %c", &jenis_kelamin);

    if (jenis_kelamin == 'L' || jenis_kelamin == 'l') {
        printf("Jenis Kelamin : Laki-laki\n");
    } else if (jenis_kelamin == 'P' || jenis_kelamin == 'p') {
        printf("Jenis Kelamin : Perempuan\n");
    } else {
        printf("Jenis Kelamin tidak valid\n");
    }

    printf("Masukan Alamat : ");
    while (getchar() != '\n' && getchar() != EOF); 
    fgets(Alamat, sizeof(Alamat), stdin);
    
    printf("Masukan Kota : ");
    fflush(stdin);
    fgets(Kota, sizeof(Kota), stdin);

    printf("\n---------Data--------\n");
    printf("Nomor : %d\n", nomor);
    printf("Nama : %s\n", nama);
    printf("Jenis Kelamin : %c\n", jenis_kelamin);
    printf("Alamat : %s\n", Alamat);
    printf("Kota : %s\n", Kota);

return 0;
}