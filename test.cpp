#include <iostream>
#include "windows.h"
#include <iomanip> 
#define _USE_MATH_DEFINES   
#include "math.h"

using namespace std;


int main()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float a, b, h;
	cout << "Введіть початкове значення x:";
	cin >> a;
	cout << "Введіть кінцеве значення x:";
	cin >> b;
	cout << "Ведіть крок за x:";
	cin >> h;
	float y, x = a;
	while (x <= b)
	{
		y = (sin(pow(x, 1 / 2)) + pow(M_E, x) - 3);
		cout << setw(10) << "x=" << x << setw(10) << "y=" << y << endl;
		x += h;
	}
	system("pause");
	return 0;

}
