#include <stdio.h>
#include <math.h>

void f(const double* x, double* result)
{
	*result = pow(pow(3 * *x + 2, 2) - 24 * *x, 0.5) / (3 * pow(*x, 0.5) - 2 / pow(*x, 0.5));
}