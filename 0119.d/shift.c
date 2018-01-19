#include <stdio.h>

int main(void){
	int i = -10;

	printf("i = %2d\n", i);

	i = i^i;

	printf("i = %2d\n", i);
}
