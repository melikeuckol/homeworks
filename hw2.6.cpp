#include<stdio.h>
int main(){
	
	int sayi1,sayi2;
	int i;
	int ebob,ekok;
	
	
	printf("Birinci sayiyi gir: ");
	scanf("%d",&sayi1);
	printf("Ikinci sayiyi gir: ");
	scanf("%d",&sayi2);
	
	for (i=2; i<sayi1 && i<sayi2;i++){
		if (sayi1%i==0 && sayi2%i==0){
			printf("Ortak bolenler : %d\n",i);
			ebob=i;
		}
	}
	ekok=(sayi1*sayi2)/ebob;
	printf("Ebob: %d\n",ebob);
	printf("Ekok: %d",ekok);
		
	
	
	return 0;
}
