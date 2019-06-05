#include <stdio.h>
#include <math.h>
#include "task5_func.c"

//Option 17
void main(){
	float x = 2.7;
	float fx = func(x);
	printf("x =  %.4f\nf(x) = %.4f", x, fx);
	printf("\nGive me x:\n");
	scanf("%f", &x);
	fx = func(x);
	printf("x =  %.4f\nf(x) = %.4f\n", x, fx);
	system("pause");
    return;
}
