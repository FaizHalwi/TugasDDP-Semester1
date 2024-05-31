//penghitungan dan penentuan hari 

#include <stdio.h>

int a;
int b;
int x;

int main (){
	
	printf("Pilih Hari Dalam Angka: ");
	
	printf("\n1. hari Senin");
	
	printf("\n2. hari Selasa");
	
	printf("\n3. hari Rabu");
	
	printf("\n4. hari Kamis");
	
	printf("\n5. hari Jumat");
	
	printf("\n6. hari Sabtu");
	
	printf("\n7. hari Minggu");
	
	
	printf("\nHari Yang Pertama: ");
	    scanf("%i", &a);
	printf("\nHari Yang Kedua: ");
	     scanf("%i", &b);
	
	if (a>b)
		x=b+7-a;
	x=b-a;
	
	
	printf("\nSelisih hari: %i", x);
	
	return 0;
}

