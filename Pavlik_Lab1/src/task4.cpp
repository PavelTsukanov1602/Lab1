#include <iostream>
#include <locale.h>
#include <math.h>

using namespace std;

void f();
double x, result;

int main()
{
	setlocale(LC_ALL, "RUS");

	cin >> x;
	f();

	printf("x = %f\n", x);
	printf("result = %f\n", result);
	
	system("pause");
	return 0;
}

void f()
{
	result = 1 - (1/4 * pow(sin(2*x), 2)) + cos(2*x);
}
