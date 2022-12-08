#include<stdio.h>

int main(){
	
float sum=0;
int payda=1;
int n;

scanf("%d",&n);

	
	
	while(payda<=n)
	{
		
		payda=payda*2;
		
		sum+=1/payda;
		
	}
	
	printf("%f",sum);
	
	
	
	
	
	return 0;
	
	}
