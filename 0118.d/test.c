#include <stdio.h>


int main(void){
	char array[10];

	char *p;
	char *Parray;

	for( int i = 0; i < 10; i++ ){
		array[i] = i;
		printf("%d\n", array[i]);
	}

	printf("----------\n");

	p = array;
	for ( int i = 0; i < 10; i++){
		p[i]= i;
		printf("%d\n", p[i]);
	}


	printf("----------\n");
	*Parray = *array;
	for( int i = 0; i < 10; i ++){
		puts((const char*)Parray[i]);	
	}
}
