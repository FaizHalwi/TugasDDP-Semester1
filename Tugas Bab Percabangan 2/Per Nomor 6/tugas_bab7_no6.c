//PROGRAM belanja

#include <stdio.h>
#include <conio.h>
int main()
{
	int harga, sisa, th;
	printf("Program belanja \n");
	printf("------------------ \n\n");
	printf("Masukan total belanja : ");
	scanf("%d", &harga);

	sisa =harga%25;
	if(sisa!=0);
	else{
	}
	th=harga-sisa;
	th=harga;
	printf("\n jadi total belanja : %d", th);
	
	getch();
}