#include<stdio.h>

int main(){
	
	int i,sum;
	sum=0;
	
	for(i=1000;i<2001;i=i+2){
	
		printf("%d\n",i);
		sum=sum+i;
		
		
	}
	
	
	printf("Toplam: %d",sum);
	
	
	
	
	
	
	return 0;
}
