#include <stdio.h>
#include <math.h>

void main()
{
	double x = 5;
	double fx = (cos(x) + sin(x))/(cos(x) - sin(x));
	printf("x =  %.4lf\nf(x) = %.4lf", x, fx);

	printf("\nEnter x:\n");
	scanf("%lf", &x);
	fx = (cos(x) + sin(x))/(cos(x) - sin(x));
	printf("x =  %.4lf\nf(x) = %.4lf\n", x, fx);

	system("pause");
    return 0;
}
