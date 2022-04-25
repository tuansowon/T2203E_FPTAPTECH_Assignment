#include <stdio.h>
int main(){
	int a,b,c;
	printf("Nhap a:");
	scanf("%d",&a);
	printf("Nhap b:");
	scanf("%d",&b);
	printf("Nhap c:");
	scanf("%d",&c);
	if(a>b){
		if(a>c){
			printf("%d la so lon nhat!",a);
			scanf("%d",&a);
			}else{
				printf("%d la so lon nhat!",c);
				scanf("%d",&c);
			}
	}else if(b>c){
			printf("%d la so lon nhat!",b);
			scanf("%d",&b);
		}else{
			printf("%d la so lon nhat!",c);
			scanf("%d",&c);
		}
}
