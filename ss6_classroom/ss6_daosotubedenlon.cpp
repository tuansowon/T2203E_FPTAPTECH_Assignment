#include <stdio.h>
#include <math.h>
int main(){
	int n;
	do {
		printf("\nNhap so phan tu:");
		scanf("%d",&n);
		if (n<=0){
			printf("So phan tu khong hop le. Vui long nhap lai!");
		}
	}while (n<=0);
	int i,j, temp;
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for (i=0; i<n;i++){
		for (j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}
