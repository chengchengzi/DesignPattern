#include<iostream>
#include"Singleton.h"
using namespace std;

Singleton* Singleton::instance = NULL;

int main(){
	Singleton* s1 = Singleton::GetInstance();
	Singleton* s2 = Singleton::GetInstance();

	if(s1 == s2)
		cout << "实例相同" << endl;
	return 0;

}
