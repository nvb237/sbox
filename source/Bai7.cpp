#include<stdio.h>
int main(){
	int a, b, m, n;
	printf("nhap vao 2 so nguyen duong: ");
	scanf("%d %d",&a,&b);
	for(int i = 1;i<=a && i<=b;i++){
		if(a%i ==0&& b%i ==0){
			m = i;
		}
	}
	printf("Uoc chung lon nhat cua 2 so la: %d",m);
	printf("\nBoi chung nho nhat cua 2 so la: %d",n =((a*b)/m));
}
