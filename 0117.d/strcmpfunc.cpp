/* Made by Ravikim
 * Copyright for 정보문화사
 * 2018-01-17
*/
 /* 문자열을 비교하는 함수 만들기
*/


#include <stdio.h>
#include <iostream>

#define SKY "sky"
#define STRING_SIZE 80	// SET String buffer size

using namespace std;

int My_strcmp(const char* string1, const char* string2);

int main (void){
	char string[100];
	int ret;

	printf("Input English word and Input Enter Key!\n");
	printf("If you put 'sky', Program 'll be finished\n");


	do{
		fgets(string, STRING_SIZE, stdin);


		ret = My_strcmp(string, SKY);

		if(ret ==0){
			printf("%s == %s, ret = %d\n", string, SKY, ret);
			break;
		}

		else if(ret <0) printf("%s < %s, ret = %d\n", string, SKY, ret);
		else printf("%s > %s, ret = %d\n", string , SKY, ret);
	}while(1);
}


int My_strcmp(const char* string1, const char* string2){
	if(*string1 == (int)NULL && *string2 == (int)NULL) return 0;

	while(*string1 != (int)NULL){
		if(*string2 ==(int)NULL) return 1;

		if(*string1 == *string2){
			string1++;
			string2++;
			continue;
		}
		if(*string1 < *string2) return -1;
		else return 1;
	}

	if(*string2 != (int)NULL) return -1;

	return 0;
}
