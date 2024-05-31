//--------------------------------------------
#include <stdio.h>
//--------------------------------------------
int sisa, penarikan;
int saldo = 1000000;
//--------------------------------------------

int main (){
	printf ("jumlah saldo anda : %d", saldo);
	printf ("\njumlah saldo yang akan di tarik : ");
	scanf("%d", &penarikan);
	
	sisa = saldo - penarikan;
	if(sisa >=10000)
	
	printf("\nsisa saldo anda : %d", sisa);
	else
	if(sisa<=10000)
	
	printf ("\nanda tidak dapat melakukan tarnsaksi ! : \nsisa saldo : 10000");
	return 0;	
}
