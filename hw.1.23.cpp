#include<stdio.h>

int main(){
	
	int r,sum=0,temp,n;
	
	printf("Enter a number: ");
	scanf("%d",&n);
	temp=n;
	
	while (n>0)
	
	{
		
		r= n % 10;
		sum = (sum*10) +r ;
		n = n / 10;
		
		
    }
			if(temp==sum){
			
			printf("This number is palindrome.");
		}
				else{
					printf("This number is not palindrome.");
				}
			
			
			
		
		
	
	
	
	
	
	
	
	
	return 0;
}
