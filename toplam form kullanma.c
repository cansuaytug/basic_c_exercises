//1den 1000e kadar olan say�lar�n toplam�n� toplam form�l� olmadan yazan c program�

#include <stdio.h>

	int main() {
		int i,toplam;
		
		toplam=0;
		
		for(i=1;i<=1000;i++) 
			toplam=toplam+i;
			printf("%d",toplam);
			
		
		
		return 0;
	}
