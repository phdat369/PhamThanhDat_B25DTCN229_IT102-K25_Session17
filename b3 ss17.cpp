#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
int main(){
	char c[100];
	char x[100];
	printf("Nhap chuoi thu nhat : ");
	fgets(c,100,stdin);
	c[strlen(c)-1]='\0';
	printf("Nhap chuoi thu hai :");
	fgets(x,100,stdin);
	x[strlen(x)-1]='\0';
	strcat(c,x);
	printf("%s",c);
}
