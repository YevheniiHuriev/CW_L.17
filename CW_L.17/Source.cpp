#include <iostream>
#include <cstring>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>
#include "Department.h"

using namespace std;

int main()
{
	setlocale(0, "");

	Department itStep;
	itStep.addEmployees(new Staff("Ivan", "Manager", 13000, 3000));
	itStep.addEmployees(new Outstaff("Petr", "Cleaner", 6000));


	itStep.show();

	return 0;
}