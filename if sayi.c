//dýþarýdan girilen 1 sayýnýn 100den büyük olmasý durumunda sayýnýn yarýsýný küçük olmasý durumunda iki katýný ekrana yazan program

#include <stdio.h>

	int main() {
		
		int sayi,sonuc;
		
		
		scanf("%d",&sayi);
		
		if(sayi>100) {
			sonuc=sayi/2;
			printf("%d",sonuc);
			
			
		}
		
		else if(sayi<100) {
			
			sonuc=sayi*2;
			printf("%d",sonuc);
			
		}
			return 0;		
	}
