/* Made by Ravikim
 * Copyright for ������ȭ��
 * 2018-01-17
 */
/* ���ڿ��� ����ũ�⸸ŭ ���ϴ� �Լ� �����
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
