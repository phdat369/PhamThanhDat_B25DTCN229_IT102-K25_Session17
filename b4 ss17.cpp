#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
int main(){
	char c[100];
	printf("Nhap 1 chuoi ki tu bat ki : ");
	fgets(c,100,stdin);
	c[strlen(c)-1]='\0';
	char x;
	printf("Nhap ki tu ma ban muon xoa : ");
	scanf("%c",&x);
	int n=strlen(c);
	for(int i=0;i<strlen(c);i++){
		if(c[i]==x){
			for(int j=i;j<n;j++){
				c[j]=c[j+1];
			}
			i--;
		}
	}
	printf("%s",c);
}
