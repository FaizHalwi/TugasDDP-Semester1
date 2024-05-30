// PROGRAM Menentukan umur seseorang sesuai kategori

//DEKLARASI Pustaka
#include<stdio.h>

//DEKLARASI Variabel
int umur;


//ALGORITMA
int main(){
	printf("Masukan umur : "); scanf("%i",&umur);
	
	if (umur < 5){
		printf("Kamu termasuk balita");
	}
	else if (umur<12){
		printf("Kamu termasuk anak anak");
	}
	else if (umur<20){
		printf("Kamu termasuk remaja");
	}
	else if (umur<60){
		printf("Kamu termasuk dewasa");
	}
	else{
		printf("Kamu termasuk tua");
	}
}