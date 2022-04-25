#include <stdio.h>
int main(){
	int a,b;
	do {
		printf("nhap so nguyen to a=");
		scanf("%d", &a);
		printf("nhap so nguyen to b=");
		scanf("%d", &b);
	}while(!(b>a && a>0));
	for(int i=a;i<=b;i++){
		int k=0;
		for(int j=1;j<=i;j++){
			if(i%j==0){
				k++;
			}
		}
		if(k==2){
			printf("so nguyen to can tim:%d\n",i);
		}
	}
}
