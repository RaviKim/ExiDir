#include <stdio.h>
#include <string.h>


int main(void){
	int (*myfunc)(const char*);

	myfunc = puts;

	puts("tadpoll");
	myfunc("back leg ");

	myfunc = strlen;


	printf("String length is : %d\n", strlen("aa"));
	printf("String length is : %d\n", myfunc("aa"));
}
