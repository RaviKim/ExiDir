#include <stdio.h>
#include <stdlib.h>
#include <search.h>
#include <time.h>


int intcmp(const void *v1, const void *v2);

int main(void){
	int key, *ptr;

	int array[10] = {0,};


	srand((unsigned)time(NULL));
	for(int i = 0; i< 10;i++){
	int rnd = rand()%10+1;
	array[i] = rnd;

	printf("%d ", array[i]);
	}
	printf("\n");

while(key !=0){
	scanf("%d", &key);
	qsort(array, sizeof(array)/sizeof(int), sizeof(array[0]), intcmp);	// �޾ƿ� sizeof(array)�� ���� type���·� �����ؼ� �Ѱܾ���.
	ptr = bsearch(&key, array, sizeof(array)/sizeof(int), sizeof(array[0]), intcmp);	// ����Ž���� �켱 ������ ���������� ����� ���� �ִ�.

	if(ptr){

		printf(" FInd Number : %d\n", key);

	}
}
}

int intcmp(const void *v1, const void *v2){
	return (*(int*)v1 - *(int*)v2);
}
