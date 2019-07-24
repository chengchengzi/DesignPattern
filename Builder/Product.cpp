#include "Product.h"



Product::Product()
{
}


Product::~Product()
{
}

void Product::add(std::string part)
{
	
	parts.push_back(part);
}

void Product::show()
{
	for (auto it = parts.begin(); it != parts.end(); it++)
		std::cout << *it << std::endl;
}
