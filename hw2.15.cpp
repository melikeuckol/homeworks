#include<stdio.h>
int main(){
	
	int sayi,temp,a,ters=0;
	
	scanf("%d",&sayi);
	temp=sayi;
	
	while(temp!=0){
		a=temp%10;
		ters=(ters*10)+a;
		temp=temp/10;
		
			}
	if (ters==sayi){
		printf("palindrom.");
	}
	else {
		printf("palinrdom degil.");
	}
	
	
	return 0;
}
