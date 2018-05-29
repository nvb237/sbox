#include<stdio.h>
#include<string.h>
int main(){
	char xau[50];
	int i;
	printf("Nhap vao xau: ");
	gets(xau);
	while(xau[0]==' ') // xoa khoang trang o dau xau
	{
		for(int i =0;i<strlen(xau);i++){
			xau[i]= xau[i+1];
		}
	}
	i=0;
    while(xau[strlen(xau)]==' '){ //xoa khoang trang o cuoi xau
        xau[strlen(xau)]='\0';
    printf("\n \"%s\"", xau);
	}
	while(i<strlen(xau)-1) // xoa 2 dau canh nhau giong nhau
	{ 
        if (xau[i]==' ' && xau[i+1]==' '||xau[i]==',' && xau[i+1]==','||xau[i]=='.' && xau[i+1]=='.')
            strcpy(&xau[i], &xau[i+1]);
        else
            i++;    
    }
	for(int i =0;i<strlen(xau);i++){ //xoa dau cach o truoc dau phay hoac dau cham
		if(xau[i]==','&& xau[i-1] ==' '|| xau[i]=='.' && xau[i-1]==' '){
			 strcpy(&xau[i-1], &xau[i]);
		}
	}
	printf("%s",xau);
}
