//1den 10a kadar olan say�lar� (10 dahil) alt alta yazan c program�

#include <stdio.h>
	int main () {
		int sayac;
		sayac=1;
		
		while(sayac<=10) 
			{
				printf("%d\n",sayac);
				sayac++;
			}
		return 0;
	}
