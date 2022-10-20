// Lab_04_4.cpp
// < ����� �'������� >
// ����������� ������ � 4.4
// ������������, ������ �������� �������.
// ������ 25
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
	double R; // ������� ��������
	double xp; // ������� ��������
	double xk; // ������� ��������
	double dx; // ������� ��������
	double y; // ��������� ���������� ������
	double x;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "R = "; cin >> R;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(8) << "x" << " |"
		<< setw(14) << "y" << " |" << endl;
	cout << "---------------------------" << endl;

	x = xp;
	while (x <= xk) {
		if (x <= -2)
			y = x + 3;
		else
			if (-2 < x && x <= 4)
				y = (4 - R * x - 2 * R - x) / 6;
			else
				if (4 < x && x <= 8 - R)
					y = -R;
				else
					if (8 - R < x && x <= 8 + R)
						y = sqrt(R * R - (x - 8) * (x - 8)) - R;
					else
						y = -R;
		cout << "|" << setw(8) << setprecision(2) << x
			<< " |" << setw(14) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}