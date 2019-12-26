class Employee {

protected:
	string name;
	vector<Employee *> subordinates;
	Employee* boss;
public:
	//constructor
	Employee(string);
	void setBoss(Employee);
	Employee getBoss()const;
	Employee findSubordinate(string);
	Employee addSubordinate(string);
	void printBossName();

	void printName();

	void printNameAndSubordinates();

	void printHierarchy(int);
	unsigned int getTotalSubordinates();

};