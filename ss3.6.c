#include<stdio.h>
int main(){
	
	float canhDay, chieuCao, dienTich;
	printf("moi ban nhap vao canh day tam giac : ");
	scanf("%f", &canhDay);
	printf("moi ban nhap vao chieu cao tam giac : ");
	scanf("%f", &chieuCao);
	dienTich = (canhDay * chieuCao)/2 ;
	printf("dien tich tam giac la %.f", dienTich);
	
	return 0;
	
}
