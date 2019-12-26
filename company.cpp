#include "company.h"
#include <cstring>
using namespace std;

Company::Company() {
	owner = NULL;
}
void Company::addEmployee(string bossName, string employeeName) {
	if (owner == NULL) {
		cout << "adding owner" << endl;
		owner = new Employee(employeeName);
		owner->setBoss(owner);
	}
	else {
		Employee boss = this->findEmployee(bossName);

		if (&boss != NULL) {
			cout << "adding to a found boss" << endl;
			Employee* newEmployee = new Employee(employeeName);
			boss.addSubordinate(newEmployee);
		}
	}

}
Employee Company::findEmployee(string employeeName) {

	return owner->findSubordinate(employeeName);

}
void Company::printEmplyeeNameAndDirectSubs(string employeeName) {
	this->findEmployee(employeeName).printNameAndSubordinates();
};
void Company::printHierarchy()const {
	owner->printHierarchy(0);
};
void Company::fire(string employeeName) {
	Employee toFire = this->findEmployee(employeeName);
	Employee* toFireBoss = toFire.getBoss();

	toFireBoss->removeSub(toFire);
};