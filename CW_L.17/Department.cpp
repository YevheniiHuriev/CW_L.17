#include "Department.h"

void Department::addEmployees(Employee* obj)
{
	base.push_back(obj);
}

void Department::show() const
{
	for (int i = 0; i < base.size(); i++)
	{
		base[i]->show();
	}
}
