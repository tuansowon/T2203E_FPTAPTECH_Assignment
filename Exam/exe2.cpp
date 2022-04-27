#include <stdio.h>
#include <string.h>
void nhapMang(int ary[], int n){
	for (int i=0; i<n; i++){
		printf("Phan tu tu ary[%d]:",i);
		scanf("%d", &ary[i]);
	}
}
void reverseArray(int ary[], int n){
	for (int i=0; i<(n/2); i++){
		int tmp = ary[i];
		ary[i] = ary[n-1-i];
		ary[ary[n-1-i] = tmp];
	}
	printf("\n Mang dao nguoc la:");
	for (int i=0; i<n; i++){
		printf("%d",&ary[i]);
	}
}

int main(){
	int n;
	do {
		printf("Nhap n=");
		scanf("%d",&n);
		if (n<=0){
			printf("Khong hop le!Vui long nhap lai!");
		}
	}while(n<=0);
	int ary[50];
	nhapMang(ary,n);
	reverseArray(ary,n);
	return 0;
}
	
	
