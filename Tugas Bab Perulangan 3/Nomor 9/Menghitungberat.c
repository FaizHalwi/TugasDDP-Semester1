//PROGRAM BeratBadanIdeal

#include <stdio.h>

float tinggi, berat, ideal, x;

int main (){
     	printf("Masukkan tingginya: ");
	    scanf("%f", &tinggi);
	    printf("Masukkan beratnya: ");
	    scanf("%f", &berat);
	
	ideal=tinggi-100;
	ideal=ideal - ideal * 0.1;
	x = ideal - berat;
	
	    printf("Berat badan ideal: %.2f \n",ideal);
	
	
	if (x>=0 && x<=2 || x<=0 && x>=-2 || x==0)
		printf("Berat badan anda ideal \n");
	else
		printf("berat badan anda tidak ideal \n");
	
	return 0;
}
