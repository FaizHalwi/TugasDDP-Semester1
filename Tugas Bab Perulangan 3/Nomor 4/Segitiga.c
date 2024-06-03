//PROGRAM Segitiga

#include <stdio.h>

int a,b,c;

int main(){
	printf("Masukkan sisi 1: ");
	scanf("%i", &a);
	printf("Masukkan sisi 2: ");
	scanf("%i", &b);
	printf("Masukkan sisi terpanjang: ");
	scanf("%i", &c);
	
	if (a*a + b*b == c*c){
		printf("Segitiga Siku-Siku");
	}
	else if (a*a + b*b < c*c){
		printf("segitiga Lancip");
	}
	else 
		printf("Segitiga Tumpul");
	return 0;
}








