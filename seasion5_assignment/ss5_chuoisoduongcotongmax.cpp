#include<stdio.h>
#include<math.h>
int main(){
	int n;
	do{
		printf("Nhap so phan tu:");
		scanf("%d",&n);
		if (n<=0){
			printf("\nSo phan tu khong hop le.Xin nhap lai!");
		}
	}while(n<=0);
	int ary[n];
	for(int i=0;i<n;i++){
		scanf("%d",&ary[i]);
	}
	
}
