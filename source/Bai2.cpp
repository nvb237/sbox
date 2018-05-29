#include <stdio.h>
#include<string.h>
int main(){
	char xau[100];
	int sochuhoa = 0, sochuthuong = 0;
	printf("nhap vao 1 xau: ");
	gets(xau);
	for(int i =0; i<strlen(xau);i++){
		char c = xau[i];
		if(c>= 65 && c<= 90 ){
			sochuhoa++;
		}
		if(c>=97 && c<= 122){
			sochuthuong++;
		}
	}
	printf("So ki tu hoa la: %d ",sochuhoa);
	printf("\nSo ki tu thuong la: %d",sochuthuong);
}
