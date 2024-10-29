#include <iostream>
#include <iomanip>
#include <cmath>  // ком
#include "windows.h"

using namespace std;

int main()
{
	int a, b;
	float h, c, d;
	cout << "Enter a =";
	cin >> a;
	cout << "Enter b =";
	cin >> b;
	cout << "Enter h =";
	cin >> h;
	cout << "Enter c =";
	cin >> c;
	cout << "Enter d =";
	cin >> d;
	float y, x = a;
	while (x <= b)
	{
		y = c * x * x + d;
		cout << setw(10) << "x=" << x << setw(10) << "y=" << y << endl;
		x += h;
	}
	system("pause");
}