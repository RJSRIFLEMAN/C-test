#include <stdio.h>
#include <stdlib.h>

int main() {
    int umur, jml_sdr, anakke, jml_anak;

    printf("Masukkan umur: ");
    scanf("%d", &umur);

    printf("Masukkan jumlah saudara : ");
    scanf("%d", &jml_sdr);

    printf("Anak keberapa : ");
    scanf("%d", &anakke);   

    jml_anak = jml_sdr + 1;

    printf("Saya berumur %d tahun, anak ke-%d dari %d bersaudara.\n", umur, anakke, jml_anak);

    printf("*************************************\n");
    printf("* NAMA  : Raja Jacques Sianipar     *\n");
    printf("* NIM   : 101032600066              *\n");
    printf("* KELAS : BS1-TK50-0                *\n");
printf("*************************************\n");

    return 0;
}

