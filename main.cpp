#include "company.h"
#include <iostream>
#include <string>

using namespace std;
int main() {

	Company* compFMI = new Company;
	compFMI->addEmployee("ivan", "ivan");
	compFMI->addEmployee("ivan", "martin");
	compFMI->addEmployee("ivan", "petar");
	compFMI->addEmployee("ivan", "georgi");
	compFMI->printHierarchy();


}