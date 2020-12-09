// Lab_02.cpp
// < Сорочак Станіслав >
// Лабораторна робота № 2.
// Лінійні програми.
// Варіант 0.2

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double a; // вхідний параметр
	// double z1; // результат обчислення 1-го виразу
	double z2; // результат обчислення 2-го виразу

	cout << "x = "; cin >> a;

	// z1 = (sin(a) + sin(5.0 * a) - sin(3.0 * a)) / (cos(a) - cos(3.0 * a) + cos(5.0 * a));
	z2 = tan(3.0 * a);

	// cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;

	cin.get();
	return 0;
}
