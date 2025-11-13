#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
int main(){
	char c[100];
	printf("Nhap mat khau cua ban : ");
	fgets(c,100,stdin);
	c[strlen(c)-1]='\0';
	if(strlen(c)<8){
		printf("Khong hop le  ");
	}
	int chuhoa=0;
	int chuthuong=0;
	int chuso=0;
	int kitudacbiet=0;
	for(int i=0;i<strlen(c);i++){
		if(isdigit(c[i])){
			chuso++;
		}
		else if(islower(c[i])){
			chuthuong++;
		}
		else if(isupper(c[i])){
			chuhoa++;
		}
		else{
			kitudacbiet++;
		}
	}
	if(chuso>=1 && chuthuong>=1 && chuhoa>=1 && kitudacbiet>=1){
		printf("Hop le");
	}
	else{
		printf("Khong hop le ");
	}
}
