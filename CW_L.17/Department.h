#pragma once
#include"Employee.h"
#include"Staff.h"
#include"Outstaff.h"

class Department
{
	vector<Employee*> base;
public:
	void addEmployees(Employee* obj);
	void show()const;
};

