/* Made by Ravikim
 * Copyright for 정보문화사
 * 2018-01-17
 */
/*부분  문자열을 특정문자로 채우기	
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
