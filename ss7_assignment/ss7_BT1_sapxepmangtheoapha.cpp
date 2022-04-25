#include <stdio.h>
#include <string.h>
int main(){
	int n;
	printf("Nhap so chuoi:",n);
	scanf("%d",&n);
	char s[n][100];
	for (int i=0; i<n; i++){
		scanf("%s",s[i]);
	}
	
	for(int i=0;i<n-1;i++){
		char temp[50];
		for (int j=0; j<n-i-1;j++){
			if(strcmp( s[j], s[j+1] )>0){
				strcpy(temp,s[j]);
				strcpy(s[j],s[j+1]);
				strcpy(s[j+1],temp);
			}
		}
	}
	printf("Chuoi sau sap xep:\n");
	for (int i=0; i<n; i++){
		scanf("%s",s);
	}
	
}
