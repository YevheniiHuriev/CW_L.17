#pragma once
#include <iostream>
#include <cstring>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

class Employee
{
protected:
	string name;
	string position;
	float salary;
public:
	Employee();
	Employee(string name, string position, float salary);
	virtual void show()const;

};

