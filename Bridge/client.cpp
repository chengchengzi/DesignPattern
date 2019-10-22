#include"MobileBrand.h"
#include<iostream>
using namespace std;

int main(){
	cout << "Brand N:" << endl;
	MobileBrand* ab = new BrandN();
	ab->SetSoft(new Game());
	ab->run();

	ab->SetSoft(new AddressList());
	ab->run();

	cout << "Brand M:" << endl;
	ab = new BrandM();
	ab->SetSoft(new Game());
	ab->run();

	ab->SetSoft(new AddressList());
	ab->run();
	return 0;
}
