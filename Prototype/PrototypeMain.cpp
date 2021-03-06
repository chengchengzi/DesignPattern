// Prototype.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//


#include <iostream>
#include "Prototype.h"
#include "ConcretePrototype1.h"
#include "ConcretePrototype2.h"
using namespace std;

int main()
{
	ConcretePrototype1 cp1 = ConcretePrototype1();
	cp1.setName("王也");
	cout << "原对象值：" << cp1.getName() << endl;
	ConcretePrototype1* cp1_copy = cp1.clone();
	cout << "拷贝后的新对象值： " << cp1_copy->getName() << endl;  //深拷贝，创建新对象时，把值也一起拷贝到新对象
	cp1_copy->setName("王也2");  //新对象也可以根据自己的需要设置值
	cout << "拷贝后的新对象重新赋值：" << cp1_copy->getName() << endl;
	
	cout << endl;

	ConcretePrototype2 cp2 = ConcretePrototype2();
	cp2.setName("冯宝宝");
	cout << "原对象值：" << cp2.getName() << endl;
	ConcretePrototype2* cp2_copy = cp2.clone();
	cout << "拷贝后的新对象值： " << cp2_copy->getName() << endl;  
	cp2_copy->setName("冯宝宝2");  
	cout << "拷贝后的新对象重新赋值：" << cp2_copy->getName() << endl;
	
	delete cp1_copy;
	delete cp2_copy;
	return 0;
}


