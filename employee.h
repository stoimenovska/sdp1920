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
	/*Employee findSubordinate(string);
	Employee addSubordinate(string);
	void printBossName();

	void printName();

	void printNameAndSubordinates();

	void printHierarchy(int);
	unsigned int getTotalSubordinates();
	*/
};