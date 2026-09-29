#include <stdlib.h>
#include <stdio.h>

int main() {
    int umur,jml_sdr, anakke, jml_anak;

    printf("Masukkan Umur : ");
    scanf("%d",&umur);

    printf("Masukkan Jumlah Saudara :");
    scanf("%d",&jml_sdr);

    printf("Anak ke :");
    scanf("%d",&anakke);

    jml_anak=jml_sdr+1;

    printf("Umur : %d\n", umur);
    printf("Jumlah saudara : %d\n", jml_sdr);
    printf("anak ke : %d\n", anakke);
    printf("Jumlah anak : %d\n", jml_anak);

    printf("NAMA : I GUSTI SURYA WANGSA JUNYARTHA.\n");
    printf("NIM : 101032600091\n");
    printf ("KELAS : TK-50-05\n") ;

    return 0;
}