//D��ar�dan indisi girilen Fibonacci serisi eleman�n� ekrana yazan C program�n� yaz�n�z. 
//Not: Serinin ilk eleman� 0 ve ikinci eleman� 1 olarak kabul edilecek. 
  

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
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	
