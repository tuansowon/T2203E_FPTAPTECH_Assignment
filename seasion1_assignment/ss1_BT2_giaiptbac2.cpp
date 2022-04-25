#include <stdio.h>
#include <math.h>
int main(){
	float a,b,c;
	printf("Nhap a:");
	scanf("%f",&a);
	printf("Nhap b:");
	scanf("%f",&b);
	printf("Nhap c:");
	scanf("%f",&c);
	int x;
	if(a=0){
		if(b=0){
			if(c=0){
				printf("Phuong trinh vo so nghiem!");
			}else{
				printf("Phuong trinh vo nghiem!");
			}
		}else{
			printf("Phuong trinh co nghiem duy nhat x=%f",-c/b);
			scanf("%f",-c/b);
		}
	}else{
		float delta=b*b - (4*a*c);
		if (delta<0){
			printf("Phuong trinh vo nghiem!");
		}else if(delta=0){
			x= -b/(2*a);
			printf("Phuong trinh co 2 nghiem kep la x= %f",x);
			scanf("%f",x);
			}else{
				float x1=(-b+sqrt(delta)/(2*a));
				float x2=(-b-sqrt(delta)/(2*a));
				printf("Phuong trinh co 2 nghiem:\n");
				printf("x1=%f",x1);
				scanf("%f",&x1);
				printf("x2=%f",x2);
				scanf("%f",&x2);
			}
	}
}
