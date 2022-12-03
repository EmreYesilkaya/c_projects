#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//arkadaþlar selam normalde ödevi kendim de yapmýycaktým ama böyle bir þey hazýrladým özet gibi olsun diye altakileri yaparsanýz herkes farklý yapar
//ve 10 alýrsýnýz herkese direk atsaydým kimse tam alamazdý çünküm sorularýn tke bir çözümü yok
//sorular için kullanmanýz gereken algoritmalar aþaðýda sizin yapmanýz gereken þey bunlarý soruda yazan fonksiyon hallerine getirmek 
//örneði kitapta 161. sayfada var 
//birde menü haline getirmeniz yani case yapmanýz lazým bu da sayfa 86 da var 
//int lerin isimlerini hem soruda hem de int de deðiþtirmeyi unutmayýn
//mavi yazýlarý da silin 
//git hesabýndan bakmaya hoca izin verdi 






int main(){
	int rast,a[13],b[13],c[13],i,toplam=0,n,t1=0,t2=0,t3=0,enb,max=0;
	srand(time(NULL));
	
	for(i=0;i<12;i++){
	
		//þirketler için 12 tane kazanç hesaplayan fonksiyon 1. soruda kullanýlcak sayýt doldurda kullan!!
		a[i] = 10000 + rand() % 300000;
		b[i] = 10000 + rand() % 300000;
		c[i] = 10000 + rand() % 300000;
	}
	
	//en büyük karý bulup yazdýran fonksiyon böyle yapýlýyor  ençok satýþ ayda bunu kullan
	for(i=0; i<12 ; ++i){
		if(a[13]<a[i])
		a[13]=a[i];
			if(b[13]<b[i])
		b[13]=b[i];
			if(c[13]<c[i])
		c[13]=c[i];
			
}

en çok satýþ yapan fonsktionu bulan algoritma hocaya vermeden önce intlerin isimlerini deðeiþtir
for(i=0;i<12;i++){
	t1 = t1+a[i];
	t2 = t2+b[i];
	t3 = t3+c[i];
}
max = t1+t2+t3;

printf("%d",max);

if(t1>t2 && t1>t3){
enb=t1;
printf("en çok satýþ yapan a þirketdir %d satýþ yapmýþtýr",t1);
}
else if(t2>t3 && t2>t1){
enb = t2;
printf("en çok satýþ yapan b þirketdir %d satýþ yapmýþtýr",t2);
}
if(t3>t1 && t3>t1){

enb = t3;
printf("en çok satýþ yapan c þirketdir %d satýþ yapmýþtýr",t3);
}
son anda gördüm çýktý kýsmýnda toplam satýþý da printfle gösterin 

altaki algoritma da 4. algoritma sorudaki 
printf("hangi ayý istiyorsanýz giriniz");
scanf("%d",&n);
toplam = a[n]+b[n]+c[n];
printf("iþletmeler %d ayda toplam %d satýþ yapmýþtýr",n,toplam);



	return 0 ;
	
}
