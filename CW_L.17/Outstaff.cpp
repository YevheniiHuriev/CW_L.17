#include "Outstaff.h"

Outstaff::Outstaff()
{}

Outstaff::Outstaff(string name, string position, float salary)
	:Employee(name, position, salary){}

void Outstaff::show() const
{
	cout << "Outstaff" << endl;
	Employee::show();
}
