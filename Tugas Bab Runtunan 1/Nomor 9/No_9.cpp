// PROGRAM Menghitung jumlah penduduk


#include<stdio.h>
#include<math.h>

// DEKLARASI Variabel
int total_penduduk;
int imigrasi;
int kematian;
int migrasi;
int kelahiran;

// ALGORITMA
int main(){
	printf("Jumlah berimigrasi : "); scanf("%i", &imigrasi);
	printf("Jumlah Kematian : "); scanf("%i", &kematian);
	printf("Jumlah migrasi : "); scanf("%i", &migrasi);
	printf("Jumlah kelahiran : "); scanf("%i", &kelahiran);
	
	total_penduduk = (kelahiran + imigrasi) - (kematian + migrasi);
	
	printf("total jumlah penduduk : %i ", total_penduduk);
	
	return 0;
}



