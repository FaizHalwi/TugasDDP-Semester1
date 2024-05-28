#include<stdio.h>

int main ()
{
    typedef struct
{
    long int hh;
    long int mm;
    long int ss;
} Jam;

Jam J;
long int total_detik;

printf("Jam = ");
scanf("%d",&J.hh);
printf("Menit = ");
scanf("%d",&J.mm);
printf("Detik = ");
scanf("%d",&J.ss);

total_detik = (J.hh*3600)+(J.mm*60)+(J.ss);

printf("Total detik = %d", total_detik);
return 0;
}
