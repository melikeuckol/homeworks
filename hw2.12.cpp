#include<stdio.h>

int main(){
	
	int sum=0;
	int n;
	int i,j;
	scanf("%d",&n);
	
	for (i=1;i<n+1;i++){
		sum=0;
		for(j=1;j<i;j++){
			if(i%j==0){
				sum=sum + j;
			}
			
		}
		
			if(sum==i){
		printf("%d\n",i);
	}
	}
	

	
	
	
	
	return 0;
}
