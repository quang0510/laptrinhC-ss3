#include<stdio.h>
int main(){
	
	float diemToan, diemVan, diemAnh, tongDiem, diemTB;
	printf("moi ban nhap vao so diem toan: ");
	scanf("%f", &diemToan);
	printf("moi ban nhap vao so diem van :");
	scanf("%f", &diemVan);
	printf("moi ban nhap vao so diem anh :");
	scanf("%f", &diemAnh);
	tongDiem = diemToan + diemVan + diemAnh;
	diemTB = tongDiem / 3 ;
	printf("tong diem cua ban la : %.2f\n", tongDiem);
	printf("diem trung binh cua ban la : %.2f", diemTB);
	
	return 0;	
}
