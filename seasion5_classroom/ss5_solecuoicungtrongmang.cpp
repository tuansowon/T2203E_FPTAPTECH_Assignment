#include <stdio.h>
#include <math.h>
int main() {
	int i, n;
	do{
		printf("Nhap so phan tu:");
		scanf("%d",&n);
		if(n<=0){
			printf("\nSo phan tu khong hop le.Xin nhap lai !\n");
		}	
	}while(n<=0);
	int arry[n];
	for (i=0;i<n;i++){
		scanf("%d",&arry[i]);
	}
	for (i=n-1;i>=0;i--){
		if(arry[i]%2==1){
			printf("So le cuoi cung: %d",arry[i]);
			break;
		}
	}
}
