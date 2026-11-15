#include<iostream>
#include "employee.h"
using namespace std;

void employee::getdata()
{
	cout << "id: ";
	cin >> id;
	cin.ignore();
	cout << "name:";
	cin.getline(name, 50);
}
void employee::putdata()
{
	cout << id << " " << name << endl;
}