#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//arkada�lar selam normalde �devi kendim de yapm�ycakt�m ama b�yle bir �ey haz�rlad�m �zet gibi olsun diye altakileri yaparsan�z herkes farkl� yapar
//ve 10 al�rs�n�z herkese direk atsayd�m kimse tam alamazd� ��nk�m sorular�n tke bir ��z�m� yok
//sorular i�in kullanman�z gereken algoritmalar a�a��da sizin yapman�z gereken �ey bunlar� soruda yazan fonksiyon hallerine getirmek 
//�rne�i kitapta 161. sayfada var 
//birde men� haline getirmeniz yani case yapman�z laz�m bu da sayfa 86 da var 
//int lerin isimlerini hem soruda hem de int de de�i�tirmeyi unutmay�n
//mavi yaz�lar� da silin 
//git hesab�ndan bakmaya hoca izin verdi 






int main(){
	int rast,a[13],b[13],c[13],i,toplam=0,n,t1=0,t2=0,t3=0,enb,max=0;
	srand(time(NULL));
	
	for(i=0;i<12;i++){
	
		//�irketler i�in 12 tane kazan� hesaplayan fonksiyon 1. soruda kullan�lcak say�t doldurda kullan!!
		a[i] = 10000 + rand() % 300000;
		b[i] = 10000 + rand() % 300000;
		c[i] = 10000 + rand() % 300000;
	}
	
	//en b�y�k kar� bulup yazd�ran fonksiyon b�yle yap�l�yor  en�ok sat�� ayda bunu kullan
	for(i=0; i<12 ; ++i){
		if(a[13]<a[i])
		a[13]=a[i];
			if(b[13]<b[i])
		b[13]=b[i];
			if(c[13]<c[i])
		c[13]=c[i];
			
}

en �ok sat�� yapan fonsktionu bulan algoritma hocaya vermeden �nce intlerin isimlerini de�ei�tir
for(i=0;i<12;i++){
	t1 = t1+a[i];
	t2 = t2+b[i];
	t3 = t3+c[i];
}
max = t1+t2+t3;

printf("%d",max);

if(t1>t2 && t1>t3){
enb=t1;
printf("en �ok sat�� yapan a �irketdir %d sat�� yapm��t�r",t1);
}
else if(t2>t3 && t2>t1){
enb = t2;
printf("en �ok sat�� yapan b �irketdir %d sat�� yapm��t�r",t2);
}
if(t3>t1 && t3>t1){

enb = t3;
printf("en �ok sat�� yapan c �irketdir %d sat�� yapm��t�r",t3);
}
son anda g�rd�m ��kt� k�sm�nda toplam sat��� da printfle g�sterin 

altaki algoritma da 4. algoritma sorudaki 
printf("hangi ay� istiyorsan�z giriniz");
scanf("%d",&n);
toplam = a[n]+b[n]+c[n];
printf("i�letmeler %d ayda toplam %d sat�� yapm��t�r",n,toplam);



	return 0 ;
	
}
