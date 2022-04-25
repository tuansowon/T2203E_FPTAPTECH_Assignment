#include<stdio.h>
#include<math.h>
int main(){
	int n;
	do{
		printf("Nhap so phan tu:");
		scanf("%d",&n);
		if (n<=0){
			printf("\nSo phan tu khong hop le.Xin nhap lai!");
		}
	}while(n<=0);
	int ary[n];
	for(int i=0;i<n;i++){
		scanf("%d",&ary[i]);
	}
	bool F=true;
	int i,min;
	for(i=0; i<n; i++) {
		if(ary[i]>0){
			min=ary[i];
			F=false;
			break;
		}
		 }
	for (i=0;i<n;i++){
		if(ary[i]>0 & ary[i]<min ){
			min=ary[i];
		}
	}
	if (F){
		printf("Mang khong co so nguyen duong!");
	}else{
		printf("So nguyen duong nho nhat la:%d",min);
	}
}
