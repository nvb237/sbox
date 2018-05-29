#include<stdio.h>
int main(){
	int m, chiphi;
	
	printf("nhap vao so met da di chuyen:");
	scanf("%d", &m);
	if(m<=1000){
		chiphi = 10000;
	}
	else{
		if(m<=30000){
			chiphi = 10000+ ((m-1000)/200)*1500;
		}
		else{
			chiphi = 10000+ ((30000-1000)/200)*1500; ((m-30000)/1000)*8000;
		}
	}
	printf("Chi phi di chuyen la: %d",chiphi);
	
}
