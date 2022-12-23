#include<stdio.h>

// find sum of prime numbers 1 to n

int main()
{
	int a=1;
	int n;
	int sum=1;
	scanf("%d",&n);
	
	while(a<n)
	{
		a=a+2;
		sum+=a;
	}
		printf("%d",sum);
	
	
	
	
	
	
	return 0;
}
