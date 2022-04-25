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
	float k=0,S=0;
	for( int i=0;i<n;i++){
		if(ary[i]%2==1 && i%2==0){
			S+=ary[i];
			k++;
		}
	}
	if(k==0){
		printf("mang khong co so le o vi tri chan\n");
	}else{
		float TBC=S/k;
		printf("TBC=%f\n",TBC);
	}
}/* vi tri 0 2 4 6....*/
