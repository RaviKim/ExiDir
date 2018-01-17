#include <iostream>
#include <stdio.h>



using namespace std;


int main(void){

	int inputnum1;

	cout << "input number : ";
	cin >> inputnum1;

	
	for(int i = 1; i < 10; i++){
		int result = i * inputnum1;
		cout << inputnum1 <<"*" << i << " = " ;
		cout << result<<endl;
	}


}
