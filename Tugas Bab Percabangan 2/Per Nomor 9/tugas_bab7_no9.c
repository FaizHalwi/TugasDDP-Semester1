//Menghitung Berat Badan Ideal
#include <stdio.h>
#include <math.h>

// Deklarasi Variabel
int tb, bbi, a, b, bb;

// Algoritma
int main (){
	printf("Program Menghitung Berat Badan Ideal\n");
	printf("Masukkan tinggi badan anda = "); scanf("%i", &tb);
	printf("Masukkan berat badan anda = "); scanf("%i", &bb);
	
	a = tb - 100;
	b = a * 0.1;
	bbi = a - b;
	
	if(bb == bbi-2 || bb == bbi-1 || bb == bbi+2 || bb == bbi+1){
		printf("Berat badan anda ideal");
	}else{
		printf("Berat badan anda tidak ideal");
		
	}
	
	return 0;
}
