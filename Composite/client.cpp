#include "Composite.h"
#include<iostream>
#include<string>
using namespace std;

int main(){
	Company* root = new ConcreteCompany("Beijing root company");
	root->Add(new HRDept("The HR Dept of Beijing root company"));
	root->Add(new FinanceDept("The Finance Dept of Beijing root company"));

	Company* comp = new ConcreteCompany("the child company 1 of root company");
	comp->Add(new HRDept("The HR Dept of comp company 1"));
	comp->Add(new FinanceDept("The Finance Dept of comp company 1"));
	
	root->Add(comp);

	Company* comp2 = new ConcreteCompany("the child company 2 of root company");
    comp2->Add(new HRDept("The HR Dept of comp company 2"));
	comp2->Add(new FinanceDept("The Finance Dept of comp company 2"));
	 
	root->Add(comp2);
	
	cout << "Constrct: " << endl << endl;
	root->Display(1);

	cout << "The Duty: " << endl << endl;
	root->LineOfDuty();

	delete root;

	return 0;
}
