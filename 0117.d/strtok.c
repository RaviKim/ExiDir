/* Made by Ravikim
 * Copyright for ������ȭ��
 * 2018-01-17
 */
/* ���ڿ��� �����ڷ� �и��ϱ�	
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
