// Builder.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include"Builder.h"
#include"Product.h"
#include"Director.h"
#include"ConcreteBuilder.h"
int main()
{
	Director director = Director();
	Builder * builder = new ConcreteBuilder();
	director.construct(builder);
	Product p = builder->getProduct();
	p.show();

	return 0;
}

