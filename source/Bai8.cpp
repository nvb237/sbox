#include<stdio.h>
#include<string.h>
int main(){
	char xau[100];
	printf("nhap vao xau: ");
	gets(xau);
	printf("xau sau khi dao: %s", strrev(xau));
}

