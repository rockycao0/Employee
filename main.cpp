#include<iostream>
#include"Employee.h"
#include"Manager.h"
using namespace std;
int main()
{
	Employee a(500,"Li",2013);
	cout <<a.getname()<<"is"<< a.salary() << endl;
	Manager b(500,"wang", 2014,2000,3);
	cout << b.getname() << "is" << b.salary() << endl;
	return 0;
}