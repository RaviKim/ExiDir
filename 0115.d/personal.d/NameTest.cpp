#include <iostream>



namespace BestComImp1{
	void SimpleFunc(void);
}

namespace ProgComImp1{
	void SimpleFunc(void);
}


using namespace BestComImp1;
using namespace ProgComImp1;


int main(void){
	SimpleFunc();
	SimpleFunc();
	return 0;
}

void BestComImp1::SimpleFunc(void){

	std::cout<<"BestCom define function"<<std::endl;
}

void ProgComImp1::SimpleFunc(void){
	std::cout<<"ProgCom define function"<<std::endl;

}
