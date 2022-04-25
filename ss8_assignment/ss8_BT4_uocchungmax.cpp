#include <stdio.h>
#include <math.h>

int min(int a,int b){
	int min;
	if(a=b){
		min=a;
		}else if(a>b){
			min=b;
			}else{
				min=a;
				}
	return min;			
}
int UCLN(int a, int b){
	int max;
		for(int i=min(a,b);i>0;--i){
			if(a%i==0 && b%i==0){
				max=i;
				break;
			}
		}
		return max;
	}
int main(){
	int a,b;
	printf("Nhap a=");
	scanf("%d",&a);
	printf("Nhap b=");
	scanf("%d",&b);
	int max = UCLN(a,b);
	printf("Uoc chung lon nhat: %d",max);
	scanf("%d",&max);
}
