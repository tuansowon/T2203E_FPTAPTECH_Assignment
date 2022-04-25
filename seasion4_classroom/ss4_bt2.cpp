#include <stdio.h>
int main(){
	int n;
	do{
		printf("Nhap n:",n);
		scanf("%d",&n);
	}while(n<=2);
	for (int m=2;m<n;m++){
		int k=0;
		for(int i=2;i<m/2;i++){
			if(m%i==0){
				k++;
				break;
			}
			}
		if(k==0){
				printf("SNT:%d\n",m);	
		}
}
}
