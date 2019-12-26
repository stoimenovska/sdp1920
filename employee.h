class Employee {

protected:
	string name;
	vector<Employee *> subordinates;
	Employee* boss;
public:
	//constructor
	Employee();
};