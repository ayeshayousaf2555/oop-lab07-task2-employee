#include<iostream>
#include"employee.h"
using namespace std;

int main()
{
	employee e[30];
	int n;
	cout << "how many (1-30)?";
	cin >> n;
	while (n < 1 || n>30)
	{
		cout << "wrong enter 1-30";
		cin >> n;
	}
	for (int i = 0; i < n; i++)
	{
		e[i].getdata();
	}
	for (int i = 0; i < n; i++)
	{
		e[i].putdata();
	}

	return 0;
}