#include <stdio.h>
int main(){
	int n;
	do {
	printf("Nhap so nguyen n=",n);
	scanf("%d",&n);
	}while (n<=0);
	for(int i=1; i<n; i++){
		if (i%2!=0){
			printf("%d",i);
		}
	}
}
