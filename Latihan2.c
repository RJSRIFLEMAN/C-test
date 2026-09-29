#include <stdlib.h>
#include <stdio.h>

int main() {
    int sisi;
    int luas_persegi;
    int keliling_persegi;
    int luas_segitiga;
    int keliling_segitiga;
    int luas_arsiaran;

    printf("Masukkan panjang sisi : ");
    scanf("%d", &sisi);

        luas_persegi = sisi * sisi;
        keliling_persegi = 4 * sisi;
        luas_segitiga = (sisi * sisi) / 2;
        keliling_segitiga = 3 * sisi;
        luas_arsiaran = luas_persegi - luas_segitiga;

    printf("Luas persegi adalah : %d\n", luas_persegi);
    printf("Keliling persegi adalah : %d\n", keliling_persegi);

    printf("Luas Segitiga adalah : %d\n", luas_segitiga);
    printf("Keliling Segitiga adalah : %d\n", keliling_segitiga);

    printf("Luas Arsiaran adalah : %d\n", luas_arsiaran);

    printf("*************************************\n");
    printf("* NAMA  : Raja Jacques Sianipar     *\n");
    printf("* NIM   : 101032600066              *\n");
    printf("* KELAS : BS1-TK50-0                *\n");
    printf("*************************************\n");

return 0;
}
