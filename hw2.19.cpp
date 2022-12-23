#include<stdio.h>
#include<math.h>

int main(){
 
 int fak=1,derece,x;
 float sum=1;
 
 scanf("%d",&x);
 
 for (derece=1;derece<=x;derece++)
 {
 	
 	fak=fak*derece;
 	sum+=pow(x,derece)/fak;
 	
 }
 printf("%f",sum);  
 
   
 
 
 
 
	
	return 0;
}
