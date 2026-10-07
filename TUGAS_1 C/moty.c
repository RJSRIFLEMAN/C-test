#include <stdlib.h>
#include <stdio.h>

int main() {
    char nama[50];
    int umur;
    int anakke;
    int saudara;
    int jumlah;

    printf("Siapa Nama Anda?\n");
    scanf("%s", &nama);
    printf("Berapa Umur Anda?\n");
    scanf("%d", &umur);
    printf("Anak ke berapakah anda?\n");
    scanf("%d", &anakke);
    printf("Jumlah saudara anda berapa?\n");
    scanf("%d", &saudara);

jumlah = saudara + 1;

    printf("Nama anda adalah %s, berumr %d tahun, dan anak ke-%d dari %d bersaudara\n", nama, umur,anakke, jumlah); 


    return 0;
}