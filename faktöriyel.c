//d��ar�dan girilen bir say�n�n fakt�riyelini hesaplayan c program�

#include <stdio.h>

 int main() {
 	int i,sayi,snc=1;
 	
 	scanf("%d",&sayi);
 	
 	for(i=1;i<=sayi;i++)
	 		snc= i * snc;
 			printf("%d",snc);
		 
 	
 	
 	return 0;
 }
