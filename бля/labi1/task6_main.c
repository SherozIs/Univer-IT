#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "task6_func.c"

//Option 17
extern float x, result;
extern void func();
void main(){
	x = 2.7;
	func();
	printf("x =  %.4f\nf(x) = %.4f", x, otvet);
	printf("\nGive me x:\n");
	scanf("%f", &x);
	func();
	printf("x =  %.4f\nf(x) = %.4f\n", x, otvet);
	system("pause");
    return;
}
