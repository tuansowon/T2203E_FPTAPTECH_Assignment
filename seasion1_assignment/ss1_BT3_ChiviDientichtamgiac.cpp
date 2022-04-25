#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	printf("Nhap a=",a);
	scanf("%d",&a);
	printf("Nhap b=",b);
	scanf("%d",&b);
	printf("Nhap c=",c);
	scanf("%d",&c);
	if (a>=b+c || b>a+c || c>a+b){
		printf("Khong phai ba canh cua tam giac!");
	}else {
		printf("Phai la 3 canh cua tam giac!");

		float chuvi=a+b+c;
		printf("\nChu vi cua tam giac do la : %f", chuvi);
		scanf("%f",&chuvi);

		float p=chuvi/2;
		float S=sqrt(p*(p-a)*(p-b)*(p-c));
		printf ("\nDien tich cua tam giac do la : %f",S);
		scanf("%f",&S);
	}
}
