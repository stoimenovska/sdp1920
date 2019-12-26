#include "employee.h"
#include <cstring>
#include <iostream>
#include <vector>

using namespace std;
Employee::Employee() {

	name = "";
}
Employee::Employee(string _name) {
	name = _name;
	subordinates = {};
}
void Employee::setBoss(Employee* _boss) {
	boss = _boss;
}
Employee* Employee::getBoss() {
	return this->boss;
}
Employee Employee::findSubordinate(string name) {
	if (this->name == name) {
		return *this;
	}

	Employee* result = NULL;

	for (auto employee : this->subordinates) {
		Employee e = employee->findSubordinate(name);

		if (&e == NULL) {
			*result = e;
		}
	}

	return *result;
}
void Employee::addSubordinate(Employee* newSubordinate) {

	newSubordinate->setBoss(this);
	this->subordinates.push_back(newSubordinate);

	cout << this->subordinates.size() << endl;
	cout << newSubordinate->name << " | " << this->name << endl;


}
void Employee::printBossName() {
	this->boss->printName();
}

void Employee::printName() {
	std::cout << name << endl;
}

void Employee::printNameAndSubordinates() {
	this->printName();
	for (auto sub : this->subordinates) {
		sub->printName();
	}
}

void Employee::printHierarchy(int level) {
	string deepSpaces = " ";
	for (int i = 0; i < level; i++) {
		deepSpaces += "  ";
	}
	cout << deepSpaces << this->name << endl;
	// cout << this->subordinates.size() << endl;
	for (auto employee : this->subordinates) {

		employee->printHierarchy(level + 1);
	}

}
int Employee::getTotalSubordinates() {

	int res = 0;

	for (auto employee : this->subordinates) {
		res = res + employee->getTotalSubordinates();
	}

	return res;
}
Employee Employee::chooseReplacementAndAssignMyEmployeesToHim() {
	Employee* maxSubsEmployee = NULL;
	int maxSubs = 0;

	for (auto subordinate : this->subordinates) {
		int hisSubsCount = subordinate->getTotalSubordinates();
		if (hisSubsCount > maxSubs) {
			maxSubsEmployee = subordinate;
		}
	}

	for (auto subordinate : this->subordinates) {
		if (&subordinate != &maxSubsEmployee) {
			maxSubsEmployee->addSubordinate(subordinate);
		}

	}

	return *maxSubsEmployee;
}
void Employee::removeSub(Employee sub) {
	Employee replacement = sub.chooseReplacementAndAssignMyEmployeesToHim();

	if (&replacement == NULL) {
		this->addSubordinate(&replacement);
	}

	/*auto itr = find(this->subordinates.begin(), this->subordinates.end(), sub);
	auto index = distance(this->subordinates.begin(), itr);

	this->subordinates.erase(this->subordinates.begin() + index);*/
}