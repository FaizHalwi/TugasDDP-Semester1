//program KarakterDigit

#include <stdio.h>

   char  a;
int b;

int main(){
	
	printf("Masukkan karakter angka: ");
	scanf("%c", &a);
	
	
    	if (a>47 && a<58){
	    	b = a - 48;
	}
	    else 
		   b= -1;
	
	 printf("%i", b);
	
	
	
	return 0;
}










