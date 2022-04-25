#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int i=2;
	int k=0;
	while(i<=n/2){
		if(n%i==0){
			k++;
		}
		i++;
	}
	if (k==0){
	printf("%d la so nguyen to",n);
	}
	else{
		printf("%d khong la so nguyen to",n);
		
	}


}
