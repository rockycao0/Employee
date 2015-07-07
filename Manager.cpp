#include "Manager.h"

Manager::Manager(int money, string name, int time, int add, int level): Employee(money, name, time, level) 
{
	setadd(add);
}
void Manager::setadd(int add)
{
	this->add = add;
}
int Manager::salary()
{
	int sum;
	sum = this->getlevel() * 1000 + this->getmoney() + this->add;
	return sum;
}
Manager::~Manager()
{
}
