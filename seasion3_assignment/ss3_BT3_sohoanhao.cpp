#include <stdio.h>
int main(){
	int n;
	do{
	printf("Nhap so nguyen n=",n);
	scanf("%d",&n);
	}while (n<=0);
	int s=0;
	for(int i=1; i<n;i++){
		if (n%i==0){
			s+=i;
		}
	}
	if (s==n){
		printf("n la so hoan hao");
	}else{
		printf("n khong phai la so hoan hao");
	}
}
