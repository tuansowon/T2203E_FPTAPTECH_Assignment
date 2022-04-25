#include <stdio.h>
int main(){
	int n;
	do {
		printf("\nNhap so nguyen n=",n);
		scanf("%d",&n);
		if (n<=0){
			printf("Vui long nhap lai");
			}
	}while(n<=0);
	if(n=1 ){
		printf("n co 1 uoc va tong cac uoc la 1!");
	}else {
		int s=0;
		int k=0;
		for (int i=2; i<=n;i++){
			if ( n%i==0){
				s+=i;
				k++;
			}
		}
		printf("%d co %d uoc",n,k);
		scanf("%d",&n,&k);
		printf("%d co tong cac uoc la:%d",n,s);
		scanf("%d",&n,&s);
	}
	
}
