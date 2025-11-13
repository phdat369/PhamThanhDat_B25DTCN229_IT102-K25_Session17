#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
int main(){
	int count=0;
	printf("Nhap chuoi ki tu bat ki : ");
	char c[100];
	int maxCount=0;
	int start =0;
	int maxStart=0;
	fgets(c,100,stdin);
	c[strlen(c)-1]='\0';
	for(int i=0;i<strlen(c);i++){
		count++;
		if(c[i]==' '){
			count=count-1;
			if(count>maxCount){
				maxCount=count;
			}
			count=0;
		}
	}
	printf("\nDo dai dai nhat cua tu la : %d",maxCount);
	maxCount=0;
	count=0;
	printf("\nTu co do dai lon nhat la : ");
for (int i = 0; i <= strlen(c); i++) {
        if (c[i] != ' ' && c[i] != '\0') {
            if (count == 0) start = i; 
            count++;
        } else {
            if (count > maxCount) {
                maxCount = count;
                maxStart = start;
            }
            count = 0; 
        }
    }
    for(int i=maxStart;i<maxStart+maxCount;i++){
    	printf("%c",c[i]);
	}
}
