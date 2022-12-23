#include<stdio.h>
#include <stdlib.h>
#include <math.h>

//find all the rootss of quadratic equation.

int main() {
	
	int a,b,c,delta;
	float root1,root2;
	
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	
	delta= pow(b,2) - (4*a*c);
	
		root1= (-b + sqrt(delta)) / (2*a);
	
	    root2= (-b - sqrt(delta)) / (2*a);
	
	
	if (delta>0)
	
	{
		
	    
	    printf("You have 2 real roots: %f,%f",root1,root2);
	    
		
	}
	
	else if (delta==0)
	{
		
	root1=root2= -b / 2*a;
	
	printf("You have double-root: %f",root1);
		
		
		
	}
	
	else 
	{
		printf("No real root.");
	}
	

	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
