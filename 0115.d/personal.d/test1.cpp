#include <iostream>
#include <stdio.h>

using namespace std;

int main(void){

	int result;
	int cnt[5];

	for (int i =0; i <5; i++){
		cout << i+1 <<" : ";
		scanf("%d",&cnt[i]);
		//cout << endl;
		result +=i+1;
	}
	


	cout <<"result :" << result<<"\n";
}
