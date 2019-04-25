#include <iostream>
#include <locale.h>
#include <math.h>

using namespace std;

double f(double x);

int main()
{
	setlocale(LC_ALL, "RUS");

	double x, y;

	cin >> x;
	y = f(x);

	printf("x = %f\n", x);
	printf("f = %f\n", y);
	
	system("pause");
	return 0;
}
