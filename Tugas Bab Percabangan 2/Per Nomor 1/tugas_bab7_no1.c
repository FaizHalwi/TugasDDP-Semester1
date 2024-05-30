 //Program untuk menentukan bilangan positif dan kelipatan 4
 
 //DEKLARASI Pustaka
 # include <stdio.h>
 # include <math.h>
 
 //DEKLARASI Variabel
 int bil1, bil2;
 
 //ALGORITMA
 
 int main(){
 	printf("masukkan bilangan :"); scanf("%i", &bil1);
 	
 	if(bil1>0){
 		bil2 = bil1;
	 }else{
	 	printf("bukan angka positif");
	 }
	 
	 if(bil2 % 4 == 0){
	 	printf("angka positif dan kelipatan 4");
	 }else{
	 	printf("angka positif saja");
	 }
	 
	 return 0;	
 }
