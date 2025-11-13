#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
char c[100];
int n;
void menu(){
	printf("            MENU           ");
	printf("\n1.In ra chuoi voi toan bo ki tu in hoa ");
	printf("\n2.In ra chuoi voi toan bo ki tu in thuong ");
	printf("\n3.Thoat");
	printf("\nChon chuc nang : ");
}
int main(){
	printf("Nhap chuoi ki tu bat ki : ");
	fgets(c,100,stdin);
	c[strlen(c)-1]='\0';
	do{
		menu();
		scanf("%d",&n);
		switch(n){
			case 1:
				for(int i=0;i<strlen(c);i++){
					c[i]=toupper(c[i]);
				}
				printf("%s",c);
			break;
			case 2:
				for(int i=0;i<strlen(c);i++){
					c[i]=tolower(c[i]);
				}
				printf("%s",c);
			break;
			case 3:
				return 0;
		}
	}while(n!=3);
}
