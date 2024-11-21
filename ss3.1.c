#include<stdio.h>
int main(){
	
	char name[50];
	printf("moi ban nhap ten : ");
	//scanf("%s", &name);
	gets(name);
	printf("xin chao %s ", name);

	return 0;
	
}
