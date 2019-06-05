#include <stdio.h>
#include <math.h>

void f(const double* x, double* result)
{
	*result = pow(pow(3 * *x + 2, 2) - 24 * *x, 0.5) / (3 * pow(*x, 0.5) - 2 / pow(*x, 0.5));
}

void main()
{
	double x = 5;
	double result;

	f(&x, &result);
	printf("x =  %.4lf\nf(x) = %.4lf", x, result);

	printf("\nEnter x:\n");
	scanf("%lf", &x);
	f(&x, &result);
	printf("x =  %.4lf\nf(x) = %.4lf\n", x, result);

	system("pause");
	return 0;
}