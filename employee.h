#pragma once
#include <string>
#include <iostream>
#include <cstring>
#include <vector>

using namespace std;
class Employee {
protected:
	string name;
	vector <Employee*> subordinates;
	Employee* boss;

public:
	//constructor
	Employee();
	Employee(string);
	void setBoss(Employee*);
	Employee* getBoss();
	Employee findSubordinate(string);
	void addSubordinate(Employee*);
	void printBossName();
	void printName();
	void printNameAndSubordinates();
	void printHierarchy(int);
	int getTotalSubordinates();
	Employee chooseReplacementAndAssignMyEmployeesToHim();
	void removeSub(Employee);

};