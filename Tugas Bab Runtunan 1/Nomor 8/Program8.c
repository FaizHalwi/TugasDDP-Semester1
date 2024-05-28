#include<conio.h>
#include<stdio.h>

main ()
{
    char nama[10];
    int tinggi_badan;
    float berat;
    
    printf("Program Menghitung Berat Badan Ideal (BBI)\n\n");
    printf("Input\n");
    printf("Masukan Nama Anda = ");scanf("%s",&nama);
    printf("Masukan Tinggi Badan = ");scanf("%d",&tinggi_badan);
    
    berat=(tinggi_badan-100)*0.9;
    
    printf("\nOutput");
    printf("\nNama Saya %s Tinggi Badan %d.cm",nama,tinggi_badan);
    printf("\nBerat Ideal Saya %4.2f.kg",berat);
    getch();
         
}
