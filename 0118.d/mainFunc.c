#include <stdio.h>

int main(int argc, int *argv[]){
	int cnt;

	printf("Count parameter : %d\n", argc);


	for (int cnt = 0; cnt <argc; cnt++){
		printf("argv[%d] : %s\n", cnt, argv[cnt]);
	}
}
