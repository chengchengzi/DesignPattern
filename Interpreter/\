#include"Expression.h"
#include<sstream>
#include<vector>
#include<string>
#include<cstdlib>
using namespace std;

int main(){
	PlayText context;
	std::cout << "上海滩：" << std::endl;
	context.SetText("0 2 E 0.5 G 0.5 A 3 E 0.5 G 0.5 D 3 0.5 G 0.5 A 0.5 0 3 C 1");
	Expression* expression;
	while(context.GetText().length()>0){
		char c = context.GetText()[0];
		switch(c){
			case '0':
				expression = new Scale();
				break;
			case 'A':
			case 'B':
			case 'C':
			case 'D':
			case 'E':
			case 'F':
			case 'G':
				expression = new Note();
				break;
		}
		expression->Interpret(&context);
		delete expression;
	}
	return 0;
}
