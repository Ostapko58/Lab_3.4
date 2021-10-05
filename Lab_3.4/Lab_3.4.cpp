// Lab_03_4.cpp
// < Онишківа Остапа >
// Лабораторна робота No 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 5

#include<iostream>
#include<cmath>
#include<windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double x;
	double y;
	double R;

	cout << "x= "; cin >> x;
	cout << "y= "; cin >> y;
	cout << "R= "; cin >> R;
	

	if ((x>=-R && x<=R && y>=0 && y<=sqrt(R*R-x*x) && y<=x+R) || (x>=-R && x<=0 && y<=0 && y<=-sqrt(R*R-x*x)))
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}

	return 0;
}