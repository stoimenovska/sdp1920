#include "employee.h"
#include <cstring>
#include <iostream>

using namespace std;

class Company {
protected:
	Employee owner;
public: 
	Company();
	void addEmployee(string, string);
	//Employee findEmployee(string) const;
	//void printEmplyeeNameAndDirectSubs(string);
	//void printHierarchy()const;
	//void fire(string);
}; 