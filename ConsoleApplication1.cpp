
#include <iostream>
#include <iomanip> 
#include "math.h"

using namespace std;

int main()
{
	double x, v, y, w, C;
	cout << "Input x: ";
	cin >> x;
	cout << "Input v: ";
	cin >> v;
	cout << "Input y: ";
	cin >> y;
	cout << "Input w: ";
	cin >> w;

	if ((w != 0) && (x != 0) && (v != 0))
	{
		C = (1 / pow(x * v, 2)) + ((2 + y) / ((2 * x * y) + ((3 * x) / (10 * w * y)))) + (10 * pow(w, 1.0 / 4));
		cout << "C = " << C << endl;
	}
	else cout << "Error";
}
