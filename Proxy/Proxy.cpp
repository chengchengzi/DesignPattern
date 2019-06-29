#include "Proxy.h"



Proxy::Proxy()
{
}


Proxy::~Proxy()
{
}

void Proxy::request()
{
	if (realSubject == nullptr)
		realSubject = &(RealSubject());
	realSubject->request();
	cout << "代理对象" << endl;
}
