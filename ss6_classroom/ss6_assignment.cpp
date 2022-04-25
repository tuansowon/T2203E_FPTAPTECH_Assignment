#include<stdio.h>
#include<math.h>
int main(){
	int n;
	do {
		printf("\nNhap so phan tu:");
		scanf("%d",&n);
		if (n<=0){
			printf("So phan tu khong hop le. Vui long nhap lai!");
		}
	} while(n<=0);
	int a[n];
	for(int i=0;i<n;i++){
		bool f=false;
		printf("Nhap a[%d]",a[i]);
		scanf("%d",&a[i]);
		
		//Kiem tra cac tu 0 -> i-1 co gtri cua arr[i] chua?
		for (int j=0;j<i;j++){
			if(a[j]=a[i]){
				f=true;
				break;
			}
		}
	if(f){
			printf("\nSo nhap da bi trung. Vui long nhap lai!");
	}
	for(i=0;i<n;i++){
		scanf("a[%d]",a[i]);
	}
}

}
