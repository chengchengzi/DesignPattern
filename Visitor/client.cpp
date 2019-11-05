#include"ObjectStructure.h"
#include<iostream>
#include<cstdlib>
int main(){
	ObjectStructure o;
	o.Attach(new Man());
	o.Attach(new Woman());

	Success v1;
	o.Display(&v1);

	Failing v2;
	o.Display(&v2);

	system("pause");
	return 0;
}
