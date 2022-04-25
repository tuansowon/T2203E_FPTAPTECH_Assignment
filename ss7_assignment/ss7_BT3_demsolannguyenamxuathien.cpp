#include <stdio.h>
#include <string.h>
int main(){
	char arrs[100];
	for (int i=0; i<strlen(arrs); i++){
		scanf("%s",&arrs[i]);
	}
	int numa=0, nume=0, numi=0, numo=0, numu=0;
	for (int i=0; i<strlen(arrs); i++){
		int numa=0, nume=0, numi=0, numo=0, numu=0;
		while(arrs[i] !='\0'){
			if (arrs[i]= 'a'){
				numa++;
				}else if(arrs[i] = 'e'){
					nume++;
					}else if(arrs[i]='i'){
						numi++;
						}else if(arrs[i]='o'){
							numo++;
							}else if(arrs[i]= 'u'){
								numu++;
							}
		}
	}
	printf("Chuoi co chua %d nguyen am 'a'!",numa);
	printf("Chuoi co chua %d nguyen am 'e'!",nume);
	printf("Chuoi co chua %d nguyen am 'i'!",numi);
	printf("Chuoi co chua %d nguyen am 'o'!",numo);
	printf("Chuoi co chua %d nguyen am 'u'!",numu);
}
