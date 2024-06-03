// Program Jumlah N buah bilangan ganjil Pertama
#include <stdio.h>

int main ()
{
	int n,i,s=0;
	printf("Masukan N :");
	scanf("%d", &n);
	for (i=1;i<=n;i=i+2)
	{
		printf("%d", i);
		s=s+i;	
	}
	printf("\nHasil nya : %d", s);
	getch();
	 
	return 0;
}
