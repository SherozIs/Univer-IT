#include <math.h>
#include "func.h"

double summ2(double eps)
{
	double a = 0;
	double s = 0;
	int i = 0;

	while (1)
	{
		a = pow(-1, i) * ((double)(1 - (i * i + 1)) / (double)(i * i + 3));
		if (fabs(a) <= eps)
		{
			return s;
		}
		s += a;
		++i;
	}
}