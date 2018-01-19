#include <stdio.h>

int main(void){
	int num;

	printf("Input Number : ");

	scanf("%d", &num);

	if( num%2 ==1) printf("%d is Oddnumber.\n", num);
	else printf("%d is EvenNumber.\n", num);
}
