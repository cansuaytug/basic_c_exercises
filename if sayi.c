//d��ar�dan girilen 1 say�n�n 100den b�y�k olmas� durumunda say�n�n yar�s�n� k���k olmas� durumunda iki kat�n� ekrana yazan program

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
