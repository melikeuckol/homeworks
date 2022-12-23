#include<stdio.h>

int main(){
	int sayi,temp,a;
	int fak=1;
	int sum=0;
	
	scanf("%d",&sayi);
	temp=sayi;
	
	
	while(temp!=0)
	{
	 for(a=temp%10;a>=1;a--)
	{
		fak=fak*a;
	}
	
	sum=sum+ fak;
	fak=1;
	temp=temp/10;
	
	
	}
	
	
	
c
	else {
		printf("guclu sayi degil");
	}
	
	
	
	
	
	return 0;
}
