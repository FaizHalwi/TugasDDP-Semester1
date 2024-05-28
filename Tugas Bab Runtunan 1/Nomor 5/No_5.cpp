
#include<stdio.h>
#include<math.h>
// DEKLARASI 

int nilai_uang;
int p1000;
int p500;
int p100;
int p50;
int p25;
int sisa_nilai_uang;

//ALGORITMA
int main(){
	printf("masukan nilai uang : "); scanf("%d", &nilai_uang);
	
	p1000 = nilai_uang / 1000;

     sisa_nilai_uang= nilai_uang % 1000;

     p500 = sisa_nilai_uang / 500;

     sisa_nilai_uang = sisa_nilai_uang % 500;

     p100 = sisa_nilai_uang /100;

    sisa_nilai_uang = sisa_nilai_uang % 100;

     p50 =sisa_nilai_uang / 50;

     sisa_nilai_uang =sisa_nilai_uang % 50;

     p25 =sisa_nilai_uang / 25;

     sisa_nilai_uang = sisa_nilai_uang % 25;
     
    printf("%d buah pecahan Rp.1000 \n", p1000);
    printf("%d buah pecahan Rp.500 \n", p500);
	printf("%d buah pecahan Rp.100 \n", p100);
	printf("%d buah pecahan Rp.50 \n", p50);
	printf("%d buah pecahan Rp.25 \n", p25);
	
	return 0;
}
