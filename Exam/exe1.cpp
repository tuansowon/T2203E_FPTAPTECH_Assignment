#include <stdio.h>

int main(){
	float n;
	do{
		printf("enter n=",n);
		scanf("%f",&n);
		if(n<=0){
			printf("the error!\n");
		}
	}while(n<=0);
	float s=0;
	for (float i=1; i<=n; i++){
		s+= (1/i);
	}
	printf("Sum=%f",s);
	scanf("%f",s);
}
