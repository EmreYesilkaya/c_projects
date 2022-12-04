#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//arkadaşlar selam normalde ödevi kendim de yapmıycaktım ama böyle bir şey hazırladım özet gibi olsun diye altakileri yaparsanız herkes farklı yapar
//ve 10 alırsınız herkese direk atsaydım kimse tam alamazdı çünküm soruların tke bir çözümü yok
//sorular için kullanmanız gereken algoritmalar aşağıda sizin yapmanız gereken şey bunları soruda yazan fonksiyon hallerine getirmek 
//örneği kitapta 161. sayfada var 
//birde menü haline getirmeniz yani case yapmanız lazım bu da sayfa 86 da var 
//int lerin isimlerini hem soruda hem de int de değiştirmeyi unutmayın
//mavi yazıları da silin 
//git hesabından bakmaya hoca izin verdi 






int main(){
	int rast,a[13],b[13],c[13],i,toplam=0,n,t1=0,t2=0,t3=0,enb,max=0;
	srand(time(NULL));
	
	for(i=0;i<12;i++){
	
		//şirketler için 12 tane kazanç hesaplayan fonksiyon 1. soruda kullanılcak sayıt doldurda kullan!!
		a[i] = 10000 + rand() % 300000;
		b[i] = 10000 + rand() % 300000;
		c[i] = 10000 + rand() % 300000;
	}
	
	
	//en büyük karı bulup yazdıran fonksiyon böyle yapılıyor  ençok satış ayda bunu kullan
	// +1 yazılmasının sebebini bulamadım bulamadığı için öyle yaptım hep eksik buluyodu direk alırsanız anlaşılır.
	for(i=0; i<12 ; i++){
	 	if(a[13]<a[i])
		a[13]=a[i];
			if(b[13]<b[i])
		b[13]=b[i];
			if(c[13]<c[i])
		c[13]=c[i];
		   	}
		       for(i=0; i<12; i++){
		           if(a[i]==a[13]){
		           yer1 = i;
		              yer1=yer1+1;
		           }
		    
		           if(b[i]==b[13]){
		           yer2 = i;
		            yer2=yer2+1;
		           }
		        
		           if(c[i]==c[13]){
		           yer3 = i;
		           yer3=yer3+1;
		           }
}

en çok satış yapan fonsktionu bulan algoritma hocaya vermeden önce intlerin isimlerini değeiştir
for(i=0;i<12;i++){
	t1 = t1+a[i];
	t2 = t2+b[i];
	t3 = t3+c[i];
}
max = t1+t2+t3;

printf("%d",max);

if(t1>t2 && t1>t3){
enb=t1;
printf("en çok satış yapan a şirketdir %d satış yapmıştır",t1);
}
else if(t2>t3 && t2>t1){
enb = t2;
printf("en çok satış yapan b şirketdir %d satış yapmıştır",t2);
}
if(t3>t1 && t3>t2){

enb = t3;
printf("en çok satış yapan c şirketdir %d satış yapmıştır",t3);
}
son anda gördüm çıktı kısmında toplam satışı da printfle gösterin 

altaki algoritma da 4. algoritma sorudaki 
printf("hangi ayı istiyorsanız giriniz");
scanf("%d",&n);
	n=n-1;
toplam = a[n]+b[n]+c[n];
	n = n+1;
printf("işletmeler %d ayda toplam %d satış yapmıştır",n,toplam);



	return 0 ;
	
}
