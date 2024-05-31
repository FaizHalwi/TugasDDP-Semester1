//PROGRAM Gambar Processing
// 


#include <stdio.h>

int pixel;

int main (){
	
	printf("Masukkan pixelnya: ");
	    
		scanf("%i", &pixel);
	
	if (pixel>255){
		
		pixel=255;
		
	}
	else if (pixel<0){
		pixel=0; 
	}
	printf("%i", pixel);
	
	return 0;
}
