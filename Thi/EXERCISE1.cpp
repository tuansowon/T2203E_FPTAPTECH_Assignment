#include <stdio.h>
#include <math.h>
int tong(int a,int b){
	int sum=a+b;
	return sum;
}
int hieu(int a, int b){
	int sub= a-b;
	return sub;
}
int nhan(int a, int b){
	int mul=a*b;
	return mul;
}
double chia(int a,int b){
	double divi=a/b;
	return divi;
}
int main(){
	int a,b;
	printf("Nhap so a=");
	scanf("%d",&a);
	printf("Nhap so b="); 
	scanf("%d",&b);	
	int sum=tong(a,b);
	int sub=hieu(a,b);
	int mul=nhan(a,b);
	double divi=chia(a,b);
	printf("sum of 2 integers =",sum);
	scanf("%d",&sum);
	printf("substraction of 2 integers =",sub);
	scanf("%d",&sub);
	printf("multiplication of 2 integers =",mul);
	scanf("%d",&mul);
	printf("division of 2 integers =",divi);
	scanf("%lf",&divi);
}
