#include <stdio.h>
#include <math.h>
#include "func.h"

void print(int n, int k)
{
	double a = 0;
	int l = 0;
	int i = 0;

	do
	{
		a = pow(-1, i) * ((double)(1 - (i * i + 1)) / (double)(i * i + 3));

		l += 1;
		if (l == k)
		{
			l = 0;
			++i;
			continue;
		}

		printf("%.4f\n", a);

		n = n - 1;
		if (n == 0)
			break;

		++i;
	} while (1);
}