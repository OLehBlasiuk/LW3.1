// Lab_03_1.cpp
// < Vlasiuk Oleh >
// ����������� ������ � 3.1
// ������������, ������ ��������: ������� ���� �����.
// ������ 5
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // ������� ��������
	double y; // ��������� ���������� ������
	double A; // �������� ��������� - ������������� ����� ������� ������
	double B; // �������� ��������� - ������������� ����� ������� ������
	cout << "x = "; cin >> x;

	A = (1 / abs(x + 2)) + 1;
	// ����� 1: ������������ � ��������� ����
	if (x < 1)
		B = 7*x * x + x - 8;
	if (1 <= x && x <= 4)
		B = (cos((x + 4) / sqrt(11)) / sin((x + 4) / sqrt(11))) + 3;
	if (x > 4)
		B = sqrt(11 + abs(cos(x) * cos(x) * cos(x)));
	y = A + B;
	cout << endl;
	cout << "1) y = " << y << endl;
	cin.get();
	return 0;
}