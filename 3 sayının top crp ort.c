//d��ar�dan girilen 3 say�n�n toplam� ortalamas� �arp�m� yazd�ran program 

#include<stdio.h>

int main(){
	int s1,s2,s3,top,crp,ort;
	scanf("%d %d %d",&s1,&s2,&s3);
	top=s1+s2+s3;
	crp=s1*s2*s3;
	ort=(s1+s2+s3)/3;
	
	
	printf("%d %d %d",top,crp,ort);
	
	return 0;
	
	
	

	
}
