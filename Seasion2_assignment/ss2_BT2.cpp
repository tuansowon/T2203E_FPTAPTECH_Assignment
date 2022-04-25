#include <stdio.h>

int maxDay(int mon, int day){
	switch (mon){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			return 31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			return 30;
			break;
		case 2:
			return 28;
}
}
int dayOfYear(int mon, int day) {
	int sumofday = day;
	while (mon>0){
		sumofday +=maxDay(mon,day);
		mon--;
		return sumofday;
	}
}

void dayst(int day, int mon){
	int sum= dayOfYear(day,mon);
	int sodu = sum%7;
	switch(sodu){
		case 0:
			printf("Day la chu nhat");
		case 1:
			printf("Day la thu hai");
		case 2:
			printf("Day la thu ba");
		case 3:
			printf("Day la thu tu");
		case 4:
			printf("Day la thu nam");
		case 5:
			printf("Day la thu sau");
		case 6:
			printf("Day la thu bay");
	}
}
int main(){
	int mon, day;
	do{
		printf("Nhap ngay:",day);
		scanf("%d",&day);
		printf("Nhap thang:",mon);
		scanf("%d",&mon);
		if (day<1 || day>31 || mon<1 || mon>12 || mon==2 && day>28){
			printf("Khong hop le! Vui long nhap lai!\n");
		}
	}while (day<1 || day>31 || mon<1 || mon>12 || mon==2 && day>28);
	 int soy = sumOfYear(mon, day);
	 printf("Day la ngay thu %d trong nam\n",soy);
	 scanf("%d",&soy);
	 int dayst(day, mon);
}
