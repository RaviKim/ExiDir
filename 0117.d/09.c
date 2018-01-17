#include <stdio.h>

int count(char *str);

void main(void){
	char string[100];
	char *ret;


	ret = gets(string);

	if(ret!=NULL){
		printf("Number of Character 'a' is %d.\n", count(string));
	}
}

int count(char *str){
	int cnt = 0;


	while(*str !=(int)NULL){
		if(*str++=='a') cnt++;
	}

	return cnt;
}
