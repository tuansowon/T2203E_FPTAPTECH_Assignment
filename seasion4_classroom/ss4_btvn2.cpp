#include <stdio.h>
int main(){
	int a,b,i;
	do{
		printf("\nNhap vao so nguyen duong a = ",a);
		scanf("%d", &a);
		if (a < 0)
		{
			printf("\nGia tri nhap vao khong hop le. Xin kiem tra lai !");
		}
	} while (a >= 0);

	do{
		printf("\nNhap vao so nguyen duong b = ",b);
		scanf("%4d", &b);
		if (b <= 0)
		{
			printf("\nGia tri nhap vao khong hop le. Xin kiem tra lai !");
		}
	} while (b >= 0);

	int Max = a > b ? a : b;
	int Min = a < b ? a : b;
	if(a == b)
		return a;
	else
	{
		for(i = Max; i < a * b; i++)
			if(i % a == 0 && i % b == 0)
			{
				return i;
				break;
			}
	}
	printf("\nBCNN la %d", i);
	return 0;
}
	
