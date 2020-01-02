#pragma once
#include "employee.h"
#include <cstring>
#include <iostream>

using namespace std;

class Company {
protected:
	//pointer to the owner of the company
	Employee* owner;

public:
	//default constructor
	Company();

	//function to add an employee that doesn't have a subordinates
	void addEmployee(string, string);

	//function to add an employee with subordinates
	void addEmployeeWithSubs(string, string, vector<string>);

	//function to fire an employee that doesn't have a subordinates
	void fireEmployee(string);
	//function to fire an employee that have a subordinates
	void fireEmployeeWithSubs(string);

	//function to promote an employee
	void promoteEmployee(string);

	//helper function to find an employee when need to print direct subs
	Employee* findEmployee(string);

	//function to print an employee and his direct subs only
	void printEmplyeeNameAndDirectSubs(string);

	//helper function - print hirearchy
	void printHierarchy()const;

	//function to print an employee and all his subs
	void printEmployeeNameAndAllSubs(string);

	//function to print boss name 
	void printEmployeeBoss(string);

};