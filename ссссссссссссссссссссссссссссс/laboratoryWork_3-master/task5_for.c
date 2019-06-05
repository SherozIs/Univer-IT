#include <math.h>
#include "func.h"

int findFirstNegativeElement(double eps)
{
	double a = 0;

	for (int i = 0;; ++i)
	{
		a = pow(-1, i) * ((double)(1 - (i * i + 1)) / (double)(i * i + 3));

		if ((a < 0) && (fabs(a) <= eps))
		{
			return i + 1;
		}
	}
}