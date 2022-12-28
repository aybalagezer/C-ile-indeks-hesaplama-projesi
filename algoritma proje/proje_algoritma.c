#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* boyu noktayla ayýr deðilse hata kodu bastýr*/
/*yillik ücret hesapla döndür*/
void hatayibas(int hata)
{
	printf("Boyu Metre Ve Cm Olarak Ayir Hata Kodu %d \n\n\n",hata);
}
int yillik_fiyat_az (int diyetisyen)
{
	
	return (diyetisyen+0);

}
int yillik_fiyat_ideal(int spor_salonu)
{
	return(spor_salonu+0);
}
int yillik_fiyat_ust (int spor_salonu,int diyetisyen)
{
	return (spor_salonu+diyetisyen);
}
int yillik_fiyat_obezite(int genel_kantahlil)
{
	return(genel_kantahlil+0);
}
int main(int argc, char *argv[]) {
	printf("*SPOR SALONU UYELERI VUCUT KITLE INDEKSLERI*\n\n");
	int uyesayisi;
	int i=0;
	float indeks=0;
	int k;
	int spor_salonu=1200;
	int diyetisyen=1000;
	int genel_kantahlil=3400;
	printf("Uye Sayisi Giriniz\n");
	scanf("%d",&uyesayisi);
	
	float boylar[uyesayisi];
    float kilolar[uyesayisi];
    
	for(k=0;k<uyesayisi;k++)
	{   
		 printf("%d. Uye icin boy ve kilo giriniz: ", k + 1);
        scanf("%f %f", &boylar[k], &kilolar[k]);
        if(boylar[k]>2){
        	hatayibas(404);
		}
		else{
			printf("Boy Dogru Oranda Girildi \n");
			indeks=kilolar[k]/(boylar[k]*boylar[k]);
	    printf("%d. Uyenin Vucut Kutle Indeksi: %.2f \n",k+1,indeks);
		if(indeks<=18.5)
		{
			printf("Ideal Kilonun Altinda. Diyetisyene Yonlendirildi.\n");
			printf("Yillik Ucret: %d TL \n\n\n", yillik_fiyat_az(diyetisyen));
			
		}
		else if(indeks>18.5 && indeks<=24.9)
		{
			printf("Ideal Kiloda. Danisan Kilosunu Sporla Koruma Altina Alabilir.\n");
			printf("Yillik Ucret: %d TL \n\n\n", yillik_fiyat_ideal(spor_salonu));
		}
		else if(indeks>=25 && indeks<30)
		{
			printf("Ideal Kilonun Ustunde. Diyetisyen ve Spor Hocasina Yonlendirildi.\n");
			printf("Yillik Ucret: %d TL \n\n\n", yillik_fiyat_ust(diyetisyen,spor_salonu));
		
		}
		else
		{
			printf("Obezite. Danisan, Kan Degerlerine Baktirilmasi Icin Hastaneye Yonlendirildi.\n");
			printf("Yillik Ucret: %d TL \n\n\n", yillik_fiyat_obezite(genel_kantahlil));
			
		}
		
		}
		
	   
	
	}
	printf("Tum Uyeler Bitti\n\n");
	printf("Uyeler Boy Kilo Tablosu\n\n");
    printf("Uye\tBoy\tKilo\n");
    for ( k = 0; k < uyesayisi; k++) 
    {
    printf("%d\t%.2f\t%.2f\n", k + 1, boylar[k], kilolar[k]);
    }

	return 0;
}
