#include<stdio.h>
#include<math.h>

int main(){
	
	int sump=0,sumn=0,sum;
	int x,derece;

	
	scanf("%d",&x);
	
	for(derece=1;derece<=x;derece+=4){
		sump+=pow(x,derece);
	}
	for(derece=3;derece<=x;derece+=4)
	{
		sumn-=pow(x,derece);
	}
	
	sum=sump+sumn;
	
	printf("toplam: %d",sum);
	
	return 0;
}
