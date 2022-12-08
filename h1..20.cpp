#include<stdio.h>

int main(){
	
 int number;
 int digit=0;
 
 printf("Enter a number: ",number);
 scanf("%d",&number);
 
 while( number > 0 ){
 	
 	number = number / 10;
 	
 	digit++;
 	
 	
 }
	printf("This number has %d digits!",digit);
	
	return 0;
}
