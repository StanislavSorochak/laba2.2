// Lab_02.cpp
// < ������� �������� >
// ����������� ������ � 2.
// ˳��� ��������.
// ������ 0.2

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double a; // ������� ��������
	// double z1; // ��������� ���������� 1-�� ������
	double z2; // ��������� ���������� 2-�� ������

	cout << "x = "; cin >> a;

	// z1 = (sin(a) + sin(5.0 * a) - sin(3.0 * a)) / (cos(a) - cos(3.0 * a) + cos(5.0 * a));
	z2 = tan(3.0 * a);

	// cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;

	cin.get();
	return 0;
}
