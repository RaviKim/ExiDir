#include <stdio.h>
#include <string.h>



#define KOREA " KOREA"

int main(void){
	char *string1;
	char string2[100];

	strcpy(string1, KOREA);
	printf("%s", string1);
		
	strcpy(string2, KOREA);
	printf("%s", string2);
	puts(string2);

	//strcpy(string2,  "Spring");
}
