#include <stdio.h>
#include "task6_func.c"
extern double x, result;
extern void f();
void main(){
	x=5;
	f();
	printf("x =  %.4lf\nf(x) = %.4lf", x, result);

	printf("\nEnter x:\n");
	scanf("%lf", &x);
	f();
	printf("x =  %.4lf\nf(x) = %.4lf\n", x, result);

	system("pause");
    return 0;
}
