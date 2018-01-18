/*	void pointer Use in Function
 *
 * */
#include <stdio.h>
#include <string.h>


typedef struct tagPoint{
	int x;
	int y;
}Point;


void MY_memset(void *dest, int c, unsigned count);

int main(void){
	Point pt = {5,10};
	char array[10];

	printf("x, y : %d, %d\n", pt.x, pt.y);

	MY_memset(&pt, 0, sizeof(pt));

	printf("x, y : %d, %d\n", pt.x, pt.y);

	MY_memset(array, 48, sizeof(array));

	printf("array[0] ~ array[9] : %c ~ %c \n", array[0], array[9]);
	printf("array[0] ~ array[9] : %d ~ %d \n", array[0], array[9]);

}


void MY_memset(void *dest, int c, unsigned count){
	while(count --){
			*(char*)dest = c;
			dest = (char *)dest +1;
			}
}
