#include <math.h>
#include "func.h"

extern double x, result;
extern void f(){
	result = (cos(x) + sin(x))/(cos(x) - sin(x));
}
