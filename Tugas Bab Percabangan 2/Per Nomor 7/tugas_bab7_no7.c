// Pengembangan Angka Romawi
#include <stdio.h>
#include <conio.h>

// Deklarasi Variabel
int x;

// Algoritma
int main (){
	printf("Masukkan Kode Angka (1..10) :");
	scanf("%d", &x);
	
	switch(x)
	{
		case 1:
			printf("I\n");
			break;
		case 2:
			printf("II\n");
			break;
		case 3:
		    printf("III\n");
		    break;
		case 4:
			printf("IV\n");
			break;
		case 5:
			printf("V\n");
			break;
		case 6:
			printf("VI\n");
			break;
		case 7:
			printf("VII\n");
			break;
		case 8:
			printf("VIII\n");
			break;
		case 9:
			printf("IX\n");
			break;
		case 10:
			printf("X\n");
			break;
		default:
			printf("Salah Kode Angka\n");
	}
	
	if(x<1||x>30)
	{
		printf("Angka tidak boleh lebih dari 30 atau kurang dari 1");
	}
	
	else
	{
		while(x>=10)
		{
			printf("X");
			x=x-10;
		    }
	if(x>=5)
	{
	        if(x>=9)
	        {
	   	           printf("IX");
	   	           x=x-9;
	   	           }
	   	    else
		    {
			printf("V");
			x=x-5;
			   }       
	   }
	   while(x>=1)
		{
			if(x==4)
			{
				printf("IV");
				x=x-4;
			    }
			else
			{
				printf("I");
				x=x-1;
				}
		}
	}
	return 0;
}
