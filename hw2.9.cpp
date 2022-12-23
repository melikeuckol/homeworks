#include<stdio.h>
#include<math.h>

int main(){
	int sayi,a,temp;
	int toplam=0;
	int basamak=0;
  
  
  scanf("%d",&sayi);
  temp=sayi;
  
  while(temp!=0){
  	basamak++ ;
  	temp=temp/10;

  }
  
  temp=sayi;
  
  while(temp!=0){
  	a=temp%10;
  	toplam += pow(a,basamak);
  	temp=temp/10;
  }
  
  if (toplam==sayi){
  	printf("%d bir armstrong sayi",sayi);
  }
	else{
		printf("% d bir armstrong sayi degil.",sayi);
	}
	
	return 0;
}
