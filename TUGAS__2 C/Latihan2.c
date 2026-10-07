#include <stdlib.h>
#include <stdio.h>

int main () {
 int uts, uas ;

 float nilai_akhir;
 printf("Masukan Nilai UTS: ");
 scanf("%d", &uts); 

 printf("Masukan Nilai UAS: ");
 scanf("%d", &uas);
 
 nilai_akhir = (float) (uts+uas) / 2;
 printf("Nilai Akhir: %.2f\n", nilai_akhir);

 return 0;
}
