// This Programming comparison Capital word 


#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

#define SKY "sky"

int main(void){
	char string [100];
	int ret;

	printf("Input English word and Enter \n");
	printf("If You input 'sky', Program 'll be shutdown\n");

	do{
//		gets(string);
		
		cin >> string;
		ret = strcmp(cin, SKY);

		if(ret ==0){
			printf("%s == %s, ret = %d\n", string, SKY, ret);
			break;
		}

		else if(ret < 0) printf("%s < %s, ret = %d\n", string, SKY, ret);

		else
			printf("%s > %s, ret = %d\n", string, SKY, ret);
	}
	while(1);
}
