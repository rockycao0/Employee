#pragma once
#include "Employee.h"
class Manager :
	public Employee
{
public:
	Manager::Manager(int money, string name, int time, int add, int level = 0) ; 
	int salary();
	void setadd(int add);
	~Manager();
private:
	int add;
};

