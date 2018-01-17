#include <stdio.h>



int print(char *string);

int main(){
	print("This is a print Function!\n");
}


int print(char *string){
	int len = 0;


	while(*string !=NULL){
		printf("%c", *string);
		string++;
		len++;
	}

	return len;
}
