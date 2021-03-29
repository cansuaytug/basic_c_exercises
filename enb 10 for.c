//dýþarýdan girilen 10 sayýdan en büyüðünü yazan program for la yaz

#include <stdio.h>
	int main () {
		int sayi,i,enb;
		enb=0;
		 for(i=0;i<10;i++) {
		 	scanf("%d",&sayi);
		 	if (enb<sayi)
		 		enb=sayi;
		 }
	
	
	printf("%d",enb);
	
	
	return 0;
		
	}
