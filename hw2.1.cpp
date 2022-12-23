#include<stdio.h>

// calculate rectangle of area and perimenter.

int main()

{
	int uzun,kisa,alan,cevre;
	scanf("%d",&uzun);
	scanf("%d",&kisa);
	
	alan= uzun*kisa;
	
	cevre=2*(uzun+kisa);
	
	printf("Area: %d\n",alan);
	printf("Perimenter: %d",cevre);
	
	
	
	
	
	
	
	
	return 0;
}
