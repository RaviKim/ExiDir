/*
=========================================================   
||ExiCon Practice                                      ||
||MADE By Ravi.kim                                     ||
||                                                     ||
||Date 2018 - 01 - 19                                  ||
||Practice Title                                       ||
||문자열을 공백으로 분리하여 여러개의 문자열로 만들기. ||
||strtok Function...                                   ||
||                                                     ||
||                                                     ||
=========================================================

*/



#include <stdio.h>
#include <string.h>


int main(void){
	char string[] = "(a12), (b34), (c56)";
	char *token;


	token = strtok(string, "(123456), ");

	while(token){
		puts(token);
		token = strtok(NULL, "(123456), ");
	}
}
