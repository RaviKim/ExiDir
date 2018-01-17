#include <stdio.h>
#include <iostream>

using namespace std;

int print( char *string);


int main(void){
	print("This is a putch function!");
}

int print(char *string){

int len =0;

while(*string != (char)NULL){
cout<<	*string;
	string++;
	len++;
}


cout << endl;

return len;
}
