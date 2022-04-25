//function nhap mang
#include<stdio.h>
#include<string.h>
void nhapMang(int arr[], int n){
	for (int i=0; i<n; i++){
		printf("Nhap mang:\n");
		scanf("%s", &arr[i]);
	}
}

//function tim max mang
int timMax(int arr[], int n){
	int m=arr[0];
	for (int i=0; i<n; i++){
		if(m<arr[i]){
			m=arr[i];
		}
	}
	return m;
}

// function sap xep mang
void sapXepmang(int arr[],int n){
	for(int i=0;i<n-1;i++){
		char temp[50];
		for (int j=0; j<n-i-1;j++){
			if(strcmp(arr[j],arr[j+1] )>0){
				strcpy(temp,arr[j]);
				strcpy(arr[j],arr[j+1]);
				strcpy(arr[j+1],temp);
			}
		}
	}
}

//function xuatMang
void xuatMang(int arr[], int 
	for(int i=0; i<n; i++){
		printf("Mang sau sap xep:\n");
		scanf("%s",arr[i]);
	}
}

