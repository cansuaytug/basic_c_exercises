//dýþarýdan girilen bir sayýnýn faktöriyelini hesaplayan c programý

#include <stdio.h>

 int main() {
 	int i,sayi,snc=1;
 	
 	scanf("%d",&sayi);
 	
 	for(i=1;i<=sayi;i++)
	 		snc= i * snc;
 			printf("%d",snc);
		 
 	
 	
 	return 0;
 }
