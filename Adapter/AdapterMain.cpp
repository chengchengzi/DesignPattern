#include<iostream>
#include"Adapter.h"
int main(){
	Target * target = new Adapter();
	target->Request();
	return 0;
}


