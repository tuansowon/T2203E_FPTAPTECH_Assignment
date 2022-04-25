#include <stdio.h>
int main() {
	int i, n, max;
	printf("nhap n=");
	scanf("%d",&n);
	int arry[n];
	for (i=0;i<n;i++){
		scanf("%d",&arry[i]);
	}
	max=arry[0];
	for(i=1;i<n;i++){
		if(arry[i]>max){
			max=arry[i];
		}
	}
	printf("so lon nhat :%d",max);
}
