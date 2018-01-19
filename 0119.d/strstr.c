/*
=========================================================   
||ExiCon Practice                                      ||
||MADE By Ravi.kim                                     ||
||                                                     ||
||Date 2018 - 01 - 19                                  ||
||Practice Title                                       ||
||문자열에서 특정 문자열의 인덱스(strstr)구하기.       ||
=========================================================

*/



#include <stdio.h>
#include <string.h>


int main(void){
	char string[] = "This is a book";
	char *pos;


	pos = strstr(string, "book");

	if(pos)
	{
		printf("We find 'book' in %d sector.\n", pos-string);
		printf("%s\n", &string[pos-string]);
	}
}
