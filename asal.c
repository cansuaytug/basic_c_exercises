//Girilen bir sayýnýn asal olma durumunu ekrana yazan C programýný yazýnýz. 

#include <stdio.h>

	int main() {
		int sayi,i,sayac;
		sayac=0;
		scanf("%d",&sayi);
		for(i=2;i<sayi;i++) 
		{
		
		
			if (sayi%i==0) {
			
				sayac++; }
			}


		  if(sayac==0)
    {
        printf("Asal");                    
    }
    else
    {
        printf("Asal degil"); 
    }
    
		return 0;
	}
