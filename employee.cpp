#include "employee.h"
#include <iostram>

Employee::Employee(string _name) {
	name = _name;
	subordinates = [];
}
void Employee::setBoss(Employee _boss) {
	boss = _boss;
}
Employee Employee::getBoss()const {
	return this->boss;
}
Employee Employee::findSubordinate(string) {}
Employee Employee::addSubordinate(string) {}
void Employee::printBossName() {}

void Employee::printName() {
	std::cout << name << endl;
}

void Employee::printNameAndSubordinates() {}

void Employee::printHierarchy(int) {}
unsigned int Employee::getTotalSubordinates() {}