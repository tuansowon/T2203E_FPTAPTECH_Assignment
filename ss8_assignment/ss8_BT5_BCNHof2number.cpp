#include <stdio.h>
int SLH(int a, int b){
	int max;
	if(a=b){
		max=a;
		}else if(a>b){
			max=a;
			}else{
				max=b;
	}
	return max;
}
int BCNN(int a, int b){
	int bcmin;
	int maxV=a*b;
	for (int i= SLH(a,b); i<=maxV; i++){
		if(i%a==0 && i%b==0){
		bcmin=i;
		break;
	}
		return bcmin;
	}
}
int main(){
	int a,b;
	printf("Nhap a=");
	scanf("%d",&a);
	printf("Nhap b=");
	scanf("%d",&b);
	int bcmin=BCNN(a,b);
	printf("Boi chung nho nhat la:%d",bcmin);
	scanf("%d",&bcmin);
	
}
