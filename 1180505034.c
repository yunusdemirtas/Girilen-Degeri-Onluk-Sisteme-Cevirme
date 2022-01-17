#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, const char * argv []){
    int sayi, us;
    int sonuc=0;
	int ikiliksayi;
	int ucluksayi;
    int dortluksayi;
    int besliksayi;
    int altiliksayi;
    int yediliksayi;
    int sekizliksayi;
    int dokuzluksayi;
    int onaltiliksayi;
	int a,b,c=0;
	int toplam=0;
	int i=0;
    int s1 =0;
	
printf(" Lutfen donusturmek istediginiz sayilik sistemi seciniz: \n\n\n");
printf(" 1-ikilik\n");
printf(" 2-ucluk\n");
printf(" 3-dortluk\n");
printf(" 4-beslik\n");
printf(" 5-altilik\n");
printf(" 6-yedilik\n");
printf(" 7-sekizlik\n");
printf(" 8-dokuzluk\n");
printf(" 9-onaltilik\n\n\n");

scanf("%d" , &s1);
printf("\n\n\n");


switch (s1){
case 1:
	 printf(" iklik sistem sayisini giriniz: ");
	scanf("%d",&ikiliksayi);
	for(i=0;i<10;i++){
	if(ikiliksayi%2==0)
	toplam=toplam;
	else {
		
		sonuc = pow(2, i);
		toplam=toplam+sonuc;
	}
	ikiliksayi=ikiliksayi/10;
	
}
    break;
case 2:
	printf(" ucluk sistem sayisini giriniz: ");/*1222 1222/10 122*10=1220 1222-1220=2 böylelikle baþta girilen 1222 sayýsýnýn sonuncu basamaðýna ulaþtým*/
	scanf("%d",&ucluksayi);
	for(i=0;i<10;i++){
	a=ucluksayi/10;
	b=a*10;
	c=ucluksayi-b;
	sonuc = pow(3, i);
		toplam=toplam+(sonuc*c);
		ucluksayi=ucluksayi/10;
	a=0;
	b=0;
	c=0;
}
    
    break;
case 3:
	printf(" dortluk sistem sayisini giriniz: ");/*1222 1222/10 122*10=1220 1222-1220=2 böylelikle baþta girilen 1222 sayýsýnýn sonuncu basamaðýna ulaþtým*/
	scanf("%d",&dortluksayi);
	for(i=0;i<10;i++){
	a=dortluksayi/10;
	b=a*10;
	c=dortluksayi-b;
	sonuc = pow(4, i);
		toplam=toplam+(sonuc*c);
		dortluksayi=dortluksayi/10;
	a=0;
	b=0;
	c=0;
	  }
	  break;
case 4:
	printf(" beslik sistem sayisini giriniz: ");/*1222 1222/10 122*10=1220 1222-1220=2 böylelikle baþta girilen 1222 sayýsýnýn sonuncu basamaðýna ulaþtým*/
	scanf("%d",&besliksayi);
	for(i=0;i<10;i++){
	a=besliksayi/10;
	b=a*10;
	c=besliksayi-b;
	sonuc = pow(5, i);
		toplam=toplam+(sonuc*c);
		besliksayi=besliksayi/10;
	a=0;
	b=0;
	c=0;
	  }
	  break;
case 5:
	printf(" altilik sistem sayisini giriniz: ");/*1222 1222/10 122*10=1220 1222-1220=2 böylelikle baþta girilen 1222 sayýsýnýn sonuncu basamaðýna ulaþtým*/
	scanf("%d",&altiliksayi);
	for(i=0;i<10;i++){
	a=altiliksayi/10;
	b=a*10;
	c=altiliksayi-b;
	sonuc = pow(6, i);
		toplam=toplam+(sonuc*c);
		altiliksayi=altiliksayi/10;
	a=0;
	b=0;
	c=0;
	  }
	  break;
case 6:
	printf(" yedilik sistem sayisini giriniz: ");/*1222 1222/10 122*10=1220 1222-1220=2 böylelikle baþta girilen 1222 sayýsýnýn sonuncu basamaðýna ulaþtým*/
	scanf("%d",&yediliksayi);
	for(i=0;i<10;i++){
	a=yediliksayi/10;
	b=a*10;
	c=yediliksayi-b;
	sonuc = pow(7, i);
		toplam=toplam+(sonuc*c);
		yediliksayi=yediliksayi/10;
	a=0;
	b=0;
	c=0;
	  }
	  break;
case 7:
	printf(" sekizlik sistem sayisini giriniz: ");/*1222 1222/10 122*10=1220 1222-1220=2 böylelikle baþta girilen 1222 sayýsýnýn sonuncu basamaðýna ulaþtým*/
	scanf("%d",&sekizliksayi);
	for(i=0;i<10;i++){
	a=sekizliksayi/10;
	b=a*10;
	c=sekizliksayi-b;
	sonuc = pow(8, i);
		toplam=toplam+(sonuc*c);
		sekizliksayi=sekizliksayi/10;
	a=0;
	b=0;
	c=0;
	  }
	  break;
case 8:
	printf(" dokuzluk sistem sayisini giriniz: ");/*1222 1222/10 122*10=1220 1222-1220=2 böylelikle baþta girilen 1222 sayýsýnýn sonuncu basamaðýna ulaþtým*/
	scanf("%d",&dokuzluksayi);
	for(i=0;i<10;i++){
	a=dokuzluksayi/10;
	b=a*10;
	c=dokuzluksayi-b;
	sonuc = pow(9, i);
		toplam=toplam+(sonuc*c);
		dokuzluksayi=dokuzluksayi/10;
	a=0;
	b=0;
	c=0;
	  }
	  break;
case 9:
		printf(" onaltilik sistem sayisini giriniz: ");/*1222 1222/10 122*10=1220 1222-1220=2 böylelikle baþta girilen 1222 sayýsýnýn sonuncu basamaðýna ulaþtým*/
	scanf("%d",&onaltiliksayi);
	for(i=0;i<10;i++){
	a=onaltiliksayi/10;
	b=a*10;
	c=onaltiliksayi-b;
	sonuc = pow(16, i);
		toplam=toplam+(sonuc*c);
		onaltiliksayi=onaltiliksayi/10;
	a=0;
	b=0;
	c=0;
	  }
	  break;
	
    }
    
        printf(" onluk sayi sisteminde: %d",toplam);

}
