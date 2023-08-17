#pragma once
#include "Employee.h"
class Outstaff : public Employee
{
public: 
	Outstaff();
	Outstaff(string name, string position, float salary);

	void show()const override;
};

