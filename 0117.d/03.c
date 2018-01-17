#include <stdio.h>

struct tagSungJuk{
	int kor;
	int eng;
	int math;
}SJ;



int main(){
	SJ.kor = 100;
	SJ.eng = 95;
	SJ.math = 99;


	printf("Total Su, = %d", SJ.kor+SJ.eng+SJ.math);
}
