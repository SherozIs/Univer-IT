﻿#include <math.h>
#include "func.h"

double summ(int n)
{
	double a = 0;
	double s = 0;
	int i = 0;

	while (i < n - 1)
	{
		a = pow(-1, i) * ((double)(1 - (i * i + 1)) / (double)(i * i + 3));
		s += a;
		++i;
	}

	return s;
}