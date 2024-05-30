//Algoritma pixel
//{algoritma untuk menentukan pixel}

//deklarasi  
#include <stdio.h>

int pixel;

int main(){
	printf("\n masukan pixel : "); scanf("%i",&pixel);
	
	if (pixel>255){
		pixel = 255;
	}else if (pixel < 0){
		pixel = 0;
	}
	printf("\n hasil %i",pixel);
	return 0;
}
