/* Made by Ravikim
 * Copyright for ������ȭ��
 * 2018-01-17
 */
/* ���ڿ��� ����ũ�⸸ŭ ���ϴ� �Լ� �����
*/


#include <stdio.h>
#include <string.h>


#define SKY "sky"
//#define STRING_SIZE 100	// SET String buffer size

int main(void){
	char string[100];
	int ret;


	printf("INPUT WORD \n");
	printf("'sky' == exit code\n");

	do{
		//		gets(string);
		fgets(string, sizeof(string), stdin);
		string[strlen(string)-1] = '\0';
		ret = strncmp(string, SKY, 3);

		if(ret ==0){
			printf("%3.3s == %s, ret = %d\n", string , SKY, ret);
			break;
		}
		else if(ret <0) printf("%s < %s, ret = %d\n", string, SKY, ret);
		else printf("%s > %s, ret = %d\n", string, SKY, ret);
	}while(1);

}
