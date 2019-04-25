#include <iostream>
#include <locale.h>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	double x, y;

	x = 5;
	y = 1 - (1/4 * pow(sin(2*x), 2)) + cos(2*x);

	printf("x = %f\n", x);
	printf("y = %f\n", y);

	cin >> x;
	y = 1 - (1/4 * pow(sin(2*x), 2)) + cos(2*x);

	printf("x = %f\n", x);
	printf("y = %f\n", y);
	
	system("pause");
	return 0;
}
