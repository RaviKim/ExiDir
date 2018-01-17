/*
 * Pointer test in Function.
 * */


#include <stdio.h>

void change_x1(int x1);
void change_x2(int *x2);



int main(void){
	int x;

	x = 5;

	printf("before Calling function's value is : %d\n", x);

	change_x1(x);
	printf("after Calling x_1 function's value is : %d\n", x);

	change_x2(&x);
	printf("after Calling x_2 function's value is :%d\n", x);
}



void change_x1(int x1){
	x1 = 50;
}

void change_x2(int *x2){
	*x2 = 100;
}
