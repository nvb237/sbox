#include <stdio.h>
int main(){
	int n, a, b, c, temp;
	printf("Nhap vao so nguyen co 3 chu so: ");
	scanf("%d", &n);
	a = n/100;
	b = ((n%100)/10);
	c = n%10;
	if(b<c){
		temp = b;
		b = c;
		c = temp;
	}
	if(a<c){
		temp = a;
		a = c;
		c = temp;
	}
	if(a<b){
		temp = a;
		a = b;
		b = temp;
	}
	printf("Cac chu so cua n theo thu tu giam dan la: ");
	printf("%d%d%d",a, b, c);
}
