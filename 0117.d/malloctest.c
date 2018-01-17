#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>



#define MEMORY "MEMORY"


int main(void){
	char *pmem;
	pmem = malloc(100);

	if(pmem == NULL){
		puts("We can't allocate memory set");
	}
	else{
		strcpy(pmem, MEMORY);
		puts(pmem);

		free(pmem);
	}
}
