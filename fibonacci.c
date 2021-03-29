//Dýþarýdan indisi girilen Fibonacci serisi elemanýný ekrana yazan C programýný yazýnýz. 
//Not: Serinin ilk elemaný 0 ve ikinci elemaný 1 olarak kabul edilecek. 
  

#include <stdio.h>

int main() {

	int s1,s2,s3,i,s;
	
	s1=0;
	s2=1;
	scanf("%d",&i);
	
	for(s=1;s<i;s++)
	{
		printf("%d ",s1);
		s3=s1+s2;
		s1=s2;
		s2=s3;
		
		
	}
	  
	  printf("%d",s1);
	   
	   return 0;
}
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	
