#include <stdio.h>
int main(){
	int i,n;
	printf("Nhap n=");
	scanf("%d",&n);
	int max;
	int ary[n];
	for (i=0; i<n;i++){
		scanf("%d",&ary[i]);
	}
	max=ary[0];
	for (i=0;i<n;i++){
		if(ary[i]>max){
			max=ary[i];
		}
	}
	printf("so lon nhat trong mang la: %d\n",max);
	int max2=max; /*chon max2 la 1 so cu the trong mang de tranh so am -1 -2 -3*/
	for (i=0;i<n;i++){
		if(ary[i]<max){
			max2=ary[i];
			break;
		 }
		}
	if(max2==max){
		printf(" khong co so lon thu 2\n");
	}else{
		for (i=0;i<n;i++){
			if(ary[i]<max && ary[i]>max2){
				max2=ary[i];
			}
		}
		printf("so lon thu hai la: %d\n",max2);
	}
	
}
