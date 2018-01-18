/* Use Void Pointer!
 *
 *
 * */
#include <stdio.h>

void main(void){

	int i;
	double d= 3.14;

	int *pi;
	double *pd;
	void *pv;


	pi = &i;
	pd = &d;
	pi = &d;	//warning error
	
	pv = &i;
	pv = &d;

	printf("RealNumber d : %f\n", *(double *)pv);

}
