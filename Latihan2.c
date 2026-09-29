#include <stdlib.h>
#include <stdio.h>

int main() {
    int sisi;

    printf("Masukkan panjang sisi : ");
    scanf("%d", &sisi);

    printf("Luas persegi adalah : %d\n", sisi * sisi);
    printf("Keliling persegi adalah : %d\n", 4 * sisi);

    printf("Luas Segitiga adalah : %d\n", (sisi * sisi) / 2);
    printf("Keliling Segitiga adalah : %d\n", 3 * sisi);

    printf("*************************************\n");
    printf("* NAMA  : aja Jacques RSianipar     *\n");
    printf("* NIM   : 101032600066              *\n");
    printf("* KELAS : BS1-TK50-0                *\n");
printf("*************************************\n");

    return 0;
}