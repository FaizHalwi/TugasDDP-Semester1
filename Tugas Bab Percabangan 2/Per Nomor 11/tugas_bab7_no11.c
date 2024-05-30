#include<stdio.h>
#include<stdlib.h>

int main()
{
	printf("=======Program Selisih Kedua Hari=======");
	puts("\n");
	
	int JA,MA,DA,JDA;
	int JAK,MAK,DAK,JDAK;
	int selisih;
	int JS,MS,DS;
	
	printf("Masukan jam awal    [0-23] : "); scanf("%d",&JA);
	printf("Masukan menit awal  [0-59] : "); scanf("%d",&DA);
	printf("Masukan detik awal  [0-59] : "); scanf("%d",&MA);
	puts("");
	
	printf("Masukan jam akhir    [0-23] : "); scanf("%d",&JAK);
	printf("Masukan menit akhir  [0-23] : "); scanf("%d",&DAK);
	printf("Masukan detik akhir  [0-23] : "); scanf("%d",&MAK);
	puts("");
	
	JDA = (JA*3600)+(DA*60)+MA;
	JDAK = (JAK*3600)+(DAK*60)+MAK;
	
	if(JDA<JDAK)
	{
		selisih = JDAK-JDA;
	} else
	{
		selisih = (JDAK+24*3600)-JDA;
	}

	JS = selisih / 3600;
	MS = (selisih % 3600) / 60;
	DS = (selisih % 3600) % 60;
	
	printf("jam selisih   : %d\n", JS);
	printf("menit selisih : %d\n", MS);
	printf("detik selisih : %d\n", DS);
	return 0;
}
