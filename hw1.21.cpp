#include<stdio.h>

int main(){
	
    int sayi,ilk,son;
	
	printf("Sayiyi girin: ");
	scanf("%d",&sayi);
	
	son=sayi%10;
	
	printf("Son: %d\n",son);
	
	while(sayi>10){
		
		sayi=sayi/10;
	
		ilk=sayi;
	}
	

	  printf("Ilk: %d\n",ilk);
	  

	  
	  
	
	return 0;
}
