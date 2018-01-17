#include <stdio.h>
#include <getch.h>

#define ENTER 10

void main(void){
	int ch;

	printf("Input Ascii code what you want to changei\n");
	printf("IF you Input 'Enter', Program will be closed\n");

	do{
		ch = getch();

		printf("Character: (%c), AsciiCode = (%d)\n", ch,ch);
	}while (ch != ENTER);

}
