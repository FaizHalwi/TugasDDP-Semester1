#include <stdio.h>
int main(){
	int tanggal;
	int bulan;
	int tahun;
	
	printf("Masukkan Tanggal: ");
	scanf("%d", &tanggal);
	printf("Masukkan Bulan: ");
	scanf("%d", &bulan);
	printf ("Masukkan Tahun: ");
	scanf("%d", &tahun);
	
	if (tanggal ==31){
		tanggal=1;
		if (bulan==12){
			bulan=1;
			tahun++;
		}else{
		
			bulan++;
			}
	}else{
		tanggal++;
}
	switch(bulan){
		case 1: printf("%d Januari %d\n", tanggal, tahun); break;
		case 2: printf("%d Februari %d\n", tanggal, tahun); break;
		case 3: printf("%d Maret %d\n", tanggal, tahun); break;
		case 4: printf("%d April %d\n", tanggal, tahun); break;
		case 5: printf("%d Mei %d\n", tanggal, tahun); break;
		case 6: printf("%d Juni %d\n", tanggal, tahun); break;
		case 7: printf("%d Juli %d\n", tanggal, tahun); break;
		case 8: printf("%d Agustut %d\n", tanggal, tahun); break;
		case 9: printf("%d September %d\n", tanggal, tahun); break;
		case 10: printf("%d Oktober %d\n", tanggal, tahun); break;
		case 11: printf("%d November %d\n", tanggal, tahun); break;
		case 12: printf("%d Desember %d\n", tanggal, tahun); break;
	} 
	return 0;
}



