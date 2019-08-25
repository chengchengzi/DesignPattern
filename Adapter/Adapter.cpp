#include"Adapter.h"
/*
Adapter::Adapter(){
	adaptee = Adapter();
}
Adapter::~Adapter(){
}
*/
void Adapter::Request(){
	std::cout << "普通要求" << std::endl;
	adaptee.specificRequest();
}
