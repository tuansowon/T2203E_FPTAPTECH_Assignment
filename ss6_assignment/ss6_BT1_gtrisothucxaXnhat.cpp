#include <stdio.h>	
#include <math.h>
int main(){
	int n;
	do{
		printf("Nhap so phan tu so thuc:");
		scanf("%d",&n);
		if(n<=0){
			printf("So phan tu so thuc khong hop le. Vui long nhap lai!");
		}
	}while(n<=0);
	float a[n];
	for (int i=0; i<n; i++){
		printf("\nNhap phan tu:");
		scanf("a[%d]",a[i]);
	}
	float b[n],x;
	for (int i=0;i<n;i++){
		b[i]=abs(x-a[i]);
	}
	int max=b[0];
	for (int i=0; i<n; i++){
		if(b[i]>max){
			max==b[i];
		}
	}
}
