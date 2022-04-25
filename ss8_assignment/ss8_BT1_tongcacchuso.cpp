#include <stdio.h>
int tinhTongcacchuso(int n){
	int S=0;
	while(n!=0){
		S+=n%10;
		n=n/10;
	}
	return S;
}
int main(){
	int n; 
	printf("Nhap so nguyen n=",n);
	scanf("%d",&n);
	int S = tinhTongcacchuso(n);
	printf("Tong cac chu so cua %d = %d",n,S);
}
