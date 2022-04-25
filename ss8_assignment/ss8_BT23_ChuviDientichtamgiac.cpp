#include<stdio.h>
#include<math.h>
float Chuvi(int a,int b,int c){
	return a+b+c;
}
float dientich(int a, int b, int c){
	float P=Chuvi(a,b,c)/2;
	float S=sqrt(P*(P-a)*(P-b)*(P-c));
	return S;
}
int main(){
	int a,b,c;
	printf("Nhap a=",a);
	scanf("%d",&a);
	printf("Nhap b=",b);
	scanf("%d",&b);
	printf("Nhap c=",c);
	scanf("%d",&c);
	if((a>=b+c) && (b>=a+c) && (c>=a+b)){
		printf("Khong phai la tam giac!");
	}else{
		float Cv=Chuvi(a,b,c);
		float S=dientich(a,b,c);
		printf("\nChu vi tam giac:%f",Cv);
		printf("\nDien tich tam giac:%f",S);
	}
	
}
