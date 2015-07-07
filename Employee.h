#pragma once
#include<string>
using namespace std;
class Employee
{
public:
	Employee(int money, string name, int time, int level=0);
	~Employee();
	void setmoney(int money);
	void setlevel(int level);
	void setname(string name);
	int getmoney();
	int getlevel();
	int salary();
	string getname();
	void upgrade();
private:
	int Money;
	int Level;
	string name;
	int time;
};

