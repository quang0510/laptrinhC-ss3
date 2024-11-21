#include<stdio.h>

int main(){
	
	int number, sum;
	printf("moi ban nhap day so co 4 chu so\n");
	scanf("%d",&number);
	int nghin = number / 1000;
	int tram = number % 1000 / 100;
	int chuc = number % 100 / 10;
	int donvi = number % 10 ;
	sum = nghin + tram + chuc + donvi;
	printf("tong cac chu so la : %d", sum);
	
	return 0;
	
}
