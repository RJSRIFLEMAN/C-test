#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    /* ===== Deklarasi variabel ===== */
    char nama[40];                          /* string, panjang 40 */
    int nim;                                /* integer */
    char angkatan[5];                       /* string, panjang 5 */
    int tahun_lahir = 2005;                 /* integer, NILAI AWAL 2005 */
    char huruf_awal_nama;                   /* karakter */
    float umur;                             /* float */
    char prodi[25] = "Teknik Komputer";     /* string, panjang 25, NILAI AWAL */
    char keterangan[35];                    /* string, panjang 35 */

    /* ===== Pembacaan (input dari user) ===== */
    printf("Masukkan nama  : ");
    scanf("%[^\n]", nama);
    getchar();

    printf("Masukkan NIM   : ");
    scanf("%d", &nim);
    getchar();

    /* ===== Pengisian variabel (assignment) ===== */
    strcpy(angkatan, "2025");
    huruf_awal_nama = nama[0];
    umur = 2026 - tahun_lahir;
    strcpy(keterangan, "Mahasiswa Teknik Komputer");

    /* ===== Tampilkan hasil pembacaan dan pengisian ===== */
    printf("\n========== DATA MAHASISWA ==========\n");
    printf("Nama              : %s\n", nama);
    printf("NIM               : %d\n", nim);
    printf("Angkatan          : %s\n", angkatan);
    printf("Tahun Lahir       : %d\n", tahun_lahir);
    printf("Huruf Awal Nama   : %c\n", huruf_awal_nama);
    printf("Umur              : %.1f tahun\n", umur);
    printf("Prodi             : %s\n", prodi);
    printf("Keterangan        : %s\n", keterangan);
    printf("====================================\n");

    return 0;
}