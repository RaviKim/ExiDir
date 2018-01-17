/* Made by Ravikim
 * Copyright for 정보문화사
 * 2018-01-17
 */
/* 문자열을 일정크기만큼 비교하는 함수 만들기
*/


#include <stdio.h>
#include <string.h>


#define SKY "sky"



int main(void){
	char string[100];

	printf("INPUT\n");
	printf("Null is finish\n ::::");

	do
	{
		gets(string);{
			if(strlen(string) == 0){
				break;
			}

			printf("%d \n", strlen(string));
		}
	}while(1);
}
