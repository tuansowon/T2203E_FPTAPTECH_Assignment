#include <stdio.h>
int main(){
	int n;
	do{
		printf("Nhap n:",n);
		scanf("%d",&n);
	}while(n<=0);
	int i=1;
	int S=0;
	while(i<=n){
		if(n%i==0){
			printf("uoc cua %d:\n",i);
			S+=i;
		}
		i++;
	}
	printf("\nTong cac uoc cua %d=%1d",n,S);
}
