#include<stdio.h>
int main(){
	
	int i,k;
	k=1;
	
	scanf("%d",&i);
	
	for(k=1;k<i+1;k++){
		
		if(i%k==0){
			printf("%d\n",k);
		}
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
