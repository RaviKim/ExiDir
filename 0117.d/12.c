#include <stdio.h>

#define KOREA "Korea"

char * MY_strcpy(char*dest, const char*src);


void main(void){
	char string[100];

	MY_strcpy(string, KOREA);

	puts(string);
}

char *MY_strcpy(char *dest, const char*src) {
	if(dest == (int)NULL||src ==(int)NULL){
		if(*dest != (int)NULL) * dest = (int)NULL;
		 return NULL;
	}

	do{
		*dest++= *src;
	}
	while(*src++ != (int)NULL);

	return dest;
}
