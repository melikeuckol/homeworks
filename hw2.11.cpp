#include<stdio.h>

int main(){
	
	int sayi,sum=0;
	
	scanf("%d",&sayi);
	
  

  for(int i=1;i<sayi;i++)
  {
  	if(sayi%i==0){
  		sum=sum+i;
	  }
  }
  
  if(sum==sayi){
  	printf("mukemmel sayi.");
  }
  else {
  	printf("mukemmel sayi degil.");
  }
  

  	
	
	
	return 0;
}
