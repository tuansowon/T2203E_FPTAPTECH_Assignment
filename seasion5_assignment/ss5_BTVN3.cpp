#include <stdio.h>
#include <math.h>
int main(){
	int n;
	printf("nhap n:");
	scanf("%d",&n);
	int ary[n];
	for(int i=0;i<n;i++){
		scanf("%d",&ary[i]);
	}
	int x;
	printf("nhap x:");
	scanf("%d",&x);
	bool f=false;
	for(int i=0;i<n;i++){
		if(ary[i]==x){
			f=true;
		}
	}
	if(f){
		printf("x co trong mang\n");	
	}else{
	printf("x khong co trong mang");
	}
}
