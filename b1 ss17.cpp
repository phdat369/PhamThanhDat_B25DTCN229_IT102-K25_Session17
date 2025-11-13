#include <stdio.h>
#include <math.h>
#include <string.h>
int main(){
	char c[100];
	printf("Nhap chuoi bat ki : ");
	fgets(c,100,stdin);
	c[strlen(c)-1]='\0';
	int flag=1;
	for(int i=0;i<strlen(c)/2;i++){
		if(c[i]!=c[strlen(c)-1-i]){
			flag=0;
			break;//level
		}
	}
	if(flag==1){
		printf("La palindrome");
	}
	else{
		printf("Khong phai palindrome");
	}
}
