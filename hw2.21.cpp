#include<stdio.h>

int main(){

 int i=1,n,sum=1;
 
 scanf("%d",&n);
 
 while(i<=n)
{
	i=(i*10) +1;
	sum+=i;
}
printf("%d",sum);



	
	return 0;
}
