// TemplateMethodMain.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include"StudentAPaper.h"
#include"StudentBPaper.h"
int main()
{
	StudentAPaper studentA = StudentAPaper();
	studentA.testQuestion1();
	studentA.testAnswer1();
	studentA.testQuestion2();
	studentA.testAnswer2();
	
	std::cout << std::endl;

	StudentBPaper studentB = StudentBPaper();
	studentB.testQuestion1();
	studentB.testAnswer1();
	studentB.testQuestion2();
	studentB.testAnswer2();
	return 0;
}


