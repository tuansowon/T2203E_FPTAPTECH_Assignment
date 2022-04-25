#include<stdio.h>
#include<math.h>
int main(){
	int n;
	do{
		printf("\nNhap so phan tu:");
		scanf("%d",&n);
		if(n<=0){
			printf("So phan tu khong hop le. Vui long nhap lai!");
		}
	}while(n<=0);
	int i, arr[n];
	for (i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int search;
	printf("Nhap so can tim:");
	scanf("%d",&search);
	int low=arr[0];
	int high=arr[n-1];
	bool f=true;
	while(low<high){
		int mid=(low+high)/2;
		if(search==arr[mid]){
			printf("Da tim thay!");
			f=false;
			break;
		}else 
			if(search<arr[mid]){
				high=mid-1;
			}else{
				low=mid+1;
			}
	}
	if(f){
		printf("Not found!");
	}
}
