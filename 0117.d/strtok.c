/* Made by Ravikim
 * Copyright for 정보문화사
 * 2018-01-17
 */
/* 문자열을 구분자로 분리하기	
*/


#include <stdio.h>
#include <string.h>


#define TOKEN " "



int main(void){
	char string[100];
	char *token;


	printf("INPUT String And Key enter!\n");
	gets(string);
	
	token = strtok(string, TOKEN);

	while(token != NULL){
		puts(token);

		token = strtok(NULL, TOKEN);
	}

}
