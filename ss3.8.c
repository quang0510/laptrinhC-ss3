#include<stdio.h>

int main(){
	
	int number;
	printf("moi ban nhap day so co 4 chu so\n");
	scanf("%d",&number);
	int nghin = number / 1000;
	int tram = number % 1000 / 100;
	int chuc = number % 100 / 10;
	int donvi = number % 10 ;
	printf("so nghich dao la : %d%d%d%d", donvi, chuc, tram, nghin);
	
	return 0;
	
}
