#include<stdio.h>
#include<math.h>
int main(){
	int n;
	do{
		printf("Nhap so phan tu so thuc:");
		scanf("%d",&n);
		if(n<=0){
			printf("So phan tu so thuc khong hop le. Vui long nhap lai!");
		}
	}while(n<=0);
	int arr[n];
	printf("Nhap mang:");
	for (int i=0; i<n; i++){
		scanf("%d  ",&arr[i]);
	}
	for (int i=0; i<n; i++){
		if(arr[i]%2!=0){
			for(int j=i+1; j<n-1; j++){
				int tmp;
				if(arr[j]%2!=0 && arr[i]>arr[j]){
					int tmp = arr[j];
					arr[j]= arr[i];
					arr[i] = tmp;
				}
			}
		}
	}
	for (int i=0; i<n; i++){
		scanf("%d  ",&arr[i]);
	}
	
}
