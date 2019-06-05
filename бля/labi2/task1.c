//Var 17, t.k. vsego 15 ==> 2

#include <math.h>

_Bool isInArea(double x, double y) {
	if (((x >= -1 && x <= 0) && (y <= 1 && y >= 0) && (x * x + y * y <= 1)) || ((x >= 0 && x <= 1) && (y >= -1 && y <= 0) && (pow(x, 2) + pow(y, 2) == 1)))
		return 1;
	else
		return 0;
}