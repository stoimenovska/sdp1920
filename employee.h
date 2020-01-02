#pragma once
#include <string>
#include <iostream>
#include <cstring>
#include <vector>

using namespace std;
class Employee {
protected:

	vector <Employee*> subordinates;
	Employee* boss;

public:
	string name;
	//constructor without parameters
	//Employee();

	//constructor with parameter employee name
	Employee(string);

	//set boss to a new employee
	void setBoss(Employee*);

	//get boss from employee
	Employee* getBoss();

	//find subordinates to an employee
	Employee* findSubordinate(string);

	//get the number of subordinates in order to need a reorganization 
	int getTotalSubordinates();

	//add new subordinates to a employee
	void addSubordinate(Employee*);

	//print boss name
	void printBossName();

	//print employee name
	void printName();

	//print name and subordinates to a employee
	void printNameAndSubordinates();

	//print a whole hierarchy 
	void printHierarchy(int);

	//choose witch employee will replace the old one
	Employee* chooseReplacementAndAssignMyEmployeesToHim();

	//remove subordinates 
	void removeSub(Employee*);
};