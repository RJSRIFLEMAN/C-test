#include <stdlib.h>
#include <stdio.h>

int main() {
    int sisi;
    int luas_persegi, keliling_persegi, luas_segitiga, keliling_segitiga;
    int luas_arsiran;

    printf("Masukkan panjang sisi : ");
    scanf("%d", &sisi);

    luas_persegi = sisi * sisi;
    keliling_persegi = 4 * sisi;
    luas_segitiga = (sisi * sisi) / 2;
    keliling_segitiga = 3 * sisi;

    printf("Luas persegi adalah : %d\n", luas_persegi);
    printf("Keliling persegi adalah : %d\n", keliling_persegi);
    printf("Luas Segitiga adalah : %d\n", luas_segitiga);
    printf("Keliling Segitiga adalah : %d\n", keliling_segitiga);
    
    luas_arsiran = luas_persegi - luas_segitiga;
    printf("Luas Arsiran adalah : %d\n", luas_arsiran);

    printf("*****************************************\n");
    printf("* NAMA  : I GUSTI SURYA WANGSA JUNYARTHA*\n");
    printf("* NIM   : 101032600091                  *\n");
    printf("* KELAS : TK-50-05                      *\n");
    printf("*****************************************\n");

    return 0;
}