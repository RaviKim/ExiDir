/* Made by Ravikim
 * Copyright for ������ȭ��
 * 2018-01-17
 */
/*�κ�  ���ڿ��� Ư�����ڷ� ä���	
*/


#include <stdio.h>
#include <string.h>

int main(void){
	char string[100];


	puts("InPUT \n");
	puts("----------------------\n");

	do{
		gets(string);

		if(strlen(string) == 0) break;


		strnset(string, '*', 5);
		puts(string);
	}while(1);
}	
