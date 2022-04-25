#include <stdio.h>
int main(){
	int n;
	printf("Nhap n:",n);
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(;i%2==0&&i%3==0;){
		printf("so can tim=%d\n",i);
		break;
		}
	}
}
