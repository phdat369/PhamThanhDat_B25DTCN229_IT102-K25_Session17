#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
int main(){
	printf("Nhap chuoi thu nhat : ");
	char c[100];
	fgets(c,100,stdin);
	c[strlen(c)-1]='\0';
	printf("Nhap chuoi thu hai : ");
	char x[100];
	fgets(x,100,stdin);
	x[strlen(x)-1]='\0';
	if(strcmpi(c,x)==0){
		printf("Giong nhau ");
	}
	else {
		printf("Khac nhau");
	}
	
}
