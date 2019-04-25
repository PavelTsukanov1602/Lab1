#include <iostream>
#include <locale.h>
#include <math.h>

using namespace std;

double f(double x)
{
	return 1 - (1/4 * pow(sin(2*x), 2)) + cos(2*x);
}

int main()
{
	setlocale(LC_ALL, "RUS");

	double x, y;

	cin >> x;
	y = f(x);

	printf("x = %f\n", x);
	printf("y = %f\n", y);
	
	system("pause");
	return 0;
}
