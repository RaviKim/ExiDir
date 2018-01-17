#include <iostream>

namespace Hybrid{
	void HybFunc(void){
		std::cout <<"So Simple function!" << std::endl;
		std::cout <<"In namespace Hybrid!" << std::endl;
	}
}


using namespace Hybrid;
int main(void){

//	Hybrid::HybFunc();
 HybFunc();
	return 0;
}
