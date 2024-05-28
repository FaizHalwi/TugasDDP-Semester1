//deklarasi pustaka
#include<stdio.h>
#include<math.h>

//deklarasi variabel
float panjang_meter;
float cm;
float mm;
float inchi;
float yard;
float kaki;

// ALGORITMA
int main(){
	printf("Panjang dalam Satuan Meter : "); scanf("%f", &panjang_meter);

    mm = panjang_meter * 1000;
    cm = panjang_meter * 100;
    inchi = mm/25.4;
    kaki = cm/30.48;
    yard = panjang_meter/0.9144;
    
    printf("inchi : %f \n", inchi);
    printf("kaki : %f \n", kaki);
    printf("yard : %f \n", yard);

 

 return 0;
}
