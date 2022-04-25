#include<stdio.h>
#include<math.h>
int main(){
	int n;
	do{
		printf("\nNhap so phan tu:");
		scanf("%d",&n);
		if (n<=0){
			printf("\nSo phan tu khong hop le.Xin nhap lai!");
		}
	}while(n<=0);
	int ary[n];
	for(int i=0;i<n;i++){
		scanf("%d",&ary[i]);
	}
	int count = 0;
	int max = 0;
	
	for(int i=0; i<n; i++){
		if (ary[i]>0){
			count++;
			if(count>max){
				max= count;
			}
		}else{
			count=0;
		}
	}
	printf("So luot nhieu nhat:%d",max);
}
