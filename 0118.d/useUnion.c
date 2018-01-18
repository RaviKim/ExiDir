/*	공용체 사용하는 함수.
 *
 * */


#include <stdio.h>


typedef union tagVariable{
	int i;
	double d;
}VA;


void main(void){
	VA va;
	va.i = 5;

	printf("va.i union's value is : %d\n", va.i);

	va.d = 3.14;

	printf("va.d union's value is %f\n", va.d);
	printf("va.i union's value is %d\n", va.i);
}
