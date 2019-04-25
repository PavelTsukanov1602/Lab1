#include <iostream>
#include <math.h>

using namespace std;

double x, result;

void f()
{
	result = 1 - (1/4 * pow(sin(2*x), 2)) + cos(2*x);
}
