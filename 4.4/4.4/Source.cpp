// Lab_04_4.cpp
// < Царук В'ячеслав >
// Лабораторна робота № 4.4
// Розгалуження, задане графіком функції.
// Варіант 25
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
	double R; // вхідний параметр
	double xp; // вхідний аргумент
	double xk; // вхідний аргумент
	double dx; // вхідний аргумент
	double y; // результат обчислення виразу
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