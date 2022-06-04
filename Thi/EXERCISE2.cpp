#include <stdio.h>
void reverse(int arr[],int n){
	for(int i=0; i<=n/2; i++){
		int temp = arr[i];
		arr[i] = arr[n-i-1];
		arr[n-i-1]= temp;
	}
}
int main(){
	int arr[100], n;
	printf("Nhap so phan tu:",n);
	scanf("%d",&n);
	for (int i=0; i<n; i++){
		printf("Nhap phan tu thu %d=",i);
		scanf("%d",&arr[i]);
	}
	for (int i=0; i<n; i++){
		printf("%d \t", &arr[i]);
	}
	reverse(arr,n);
	printf("\nMang dao nguoc la:");
	for (int i = 0; i<n; i++){
		printf("%d \t",&arr[i]);
	}
}
