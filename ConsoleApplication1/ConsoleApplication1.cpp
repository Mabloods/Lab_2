// Lab_02.cpp
// < Окулович Єгор Сергійовичт>
// Лабораторна робота № 2.
// Лінійні програми.
// Варіант 14
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double z1, z2, a;
	cout << "a = ? "; cin >> a;
	z1 = (cos(a) + sin(a)) / (cos(a) - sin(a));
	z2 = tan(2*a) + 1 / cos(2*a);
	cout << "z1= " << z1 << endl;
	cout << "z2= " << z2 << endl;


	return 0;
}