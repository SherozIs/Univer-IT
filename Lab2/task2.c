#include <math.h>

double f(double x){
	if (x>=2)
		return (1+pow(x,2))/sqrt(2*x);
	else
		return abs(1-sin(2*x));
}
