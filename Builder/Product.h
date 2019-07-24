#pragma once
#include<iostream>
#include<string>
#include<vector>
class Product
{
public:
	Product();
	~Product();

	void add(std::string part);
	void show();

private:
	std::vector<std::string> parts;
};

