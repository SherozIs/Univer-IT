#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Option 17
float x, otvet;

void main(){
	x = 2.8;
	func(x);
	printf("x =  %.4f\nf(x) = %.4f", x, otvet);
	printf("\nGive me x:\n");
	scanf("%f", &x);
	func();
	printf("x =  %.4f\nf(x) = %.4f\n", x, otvet);
	system("pause");
    return;
}

void func(){
	otvet = pow(pow(3*x+2,2)-24*x,0.5)/(3*pow(x,0.5)-2/pow(x,0.5));
	}
