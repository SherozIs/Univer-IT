#include <math.h>
#include "func.h"

int findFirstNegativeElement(double eps)
{
	double a = 0;
	int i = 0;

	do
	{
		a = pow(-1, i) * ((double)(1 - (i * i + 1)) / (double)(i * i + 3));

		if ((a < 0) && (fabs(a) <= eps))
		{
			return i + 1;
		}

		++i;
	} while (1);
}