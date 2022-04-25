#include <stdio.h>
int main(){
	int n;
	printf("Nhap so nguyen n=",n);
	scanf("%d",&n);
	if (n>=2 && n<=7) {
		for (int i=2; i<=7; i++){
			if(i==n){
				printf("Day la thu %d!",i);
				scanf("%d",&i);
			}
		}
	}else if(n==8){
		printf("Day la chu nhat!");
		}else{
			printf("Khong phai ngay trong tuan");
		}
}
