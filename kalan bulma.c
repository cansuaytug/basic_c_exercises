//kalan bulma
//dýþarýdan girilen 2 sayýnýn birincinin ikinciye bölümünden kalan ekrana yazan programý yazýnýz


#include <stdio.h>
	int main() {
		int s1,s2,kalan;
		
		scanf("%d %d",&s1,&s2);
		 
		kalan=s1%s2;
		
		printf("%d",kalan);
		
		return 0;
	}
