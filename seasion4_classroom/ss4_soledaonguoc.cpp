#include <stdio.h>
int main(){
	int n;
	do{
	printf("Nhap so nguyen duong n:",n);
	scanf("%d",&n);
	}while(n<=0);
	for(int i=1;i<n;i++){
		if(i%2==1){
			int i2=i;
			int t=0;
			while(i2!=0){
				t=t*10+i2%10;
				i2=i2/10;
				printf("so dao nguoc %d\n",t);
		
			}
		}
	}
	
}
