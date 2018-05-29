#include<stdio.h>
int main(){
	int d,m,y;
	printf("nhap ngay sinh: ");
	scanf("%d",&d);
	printf("nhap thang sinh: ");
	scanf("%d",&m);
	printf("nhap nam sinh: ");
	scanf("%d",&y);
	if(d>31||m>12){
		printf("khong hop le ");
		
	}
	else{
		if(y%4==0){
			printf("Nam nhuan");
		}
		else{
			printf("khong phai nam nhuan");
		}
	}
}
