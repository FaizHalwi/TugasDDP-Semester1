// PROGRAM Jumlah N bilangan ganjil
//{Algoritma ini digunakan untulk menghitung jumlah bilangan ganjil}

// DEKLARASi Pustaka
#include<stdio.h>
#include<math.h>
// DEKLARASI Variabel
int n, i;
int  total = 0;

// ALGORTITMA
int main(){
	printf("Masukan bilangan: "); scanf("%i", &n);
	
	// Mencari bilangan ganjil
	for(i=0; i<=n; i++ ){
		if(i%2 !=0) {
			total = total +i;			
			printf(" %i  ", i);		
		}
		else{
			total = total +i;			
			printf(" %i  ", i);	
		}
			
	}
	printf("\n");
	// Menjumlahkan Bilangan Ganjil
	printf("Total = %i", total);
		
	return 0;
}


