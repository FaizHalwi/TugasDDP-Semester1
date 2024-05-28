//PROGRAM SEMUT

#include<stdio.h>
#include<math.h>

//VAR
int jarak;     
int km;        
int m;         
int cm;        
int sisa_jarak;

// ALGORITMA
int main(){
	printf("jarak : "); scanf("%i", & jarak);
	
    km             = jarak / 100000;
    sisa_jarak     = jarak % 100000;
    m              = sisa_jarak / 100;
    sisa_jarak     = sisa_jarak % 100;
    cm             = sisa_jarak;
    
    printf("%i km \n", km);
    printf("%i m \n", m);
    printf("%i cm \n", cm);

	return 0;
}



