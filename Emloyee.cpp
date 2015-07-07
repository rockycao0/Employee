#include "Employee.h"
#include <iostream>
using namespace std;

Employee::Employee(int money, string name, int time, int level)
{
	this->Money = money;
	this->name = name;
	this->Level = level;
}
void Employee::setlevel(int level)
{
	this->Level = level;
}
void Employee::setmoney(int money)
{
	this->Money = money;
}

void Employee::setname(string name)
{
	this->name = name;
}
int Employee::getlevel()
{
	return this->Level;
}
int Employee::getmoney()
{
	return this->Money;
}
void Employee::upgrade()
{
	this->Level += 1;
}
int Employee::salary()
{
	int sum;
	sum = this->Level*1000+this->Money;
	return sum;
}
string Employee::getname()
{
	return this->name;
}
Employee::~Employee()
{
	cout << this->name << "'s salart is" << this->salary() << endl;
}
