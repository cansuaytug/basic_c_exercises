//kalan bulma
//d��ar�dan girilen 2 say�n�n birincinin ikinciye b�l�m�nden kalan ekrana yazan program� yaz�n�z


#include <stdio.h>
	int main() {
		int s1,s2,kalan;
		
		scanf("%d %d",&s1,&s2);
		 
		kalan=s1%s2;
		
		printf("%d",kalan);
		
		return 0;
	}
