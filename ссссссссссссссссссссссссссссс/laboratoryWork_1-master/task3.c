#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Option 17
float func(float x);

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

float func(float x){
	float f = pow(pow(3*x+2,2)-24*x,0.5)/(3*pow(x,0.5)-2/pow(x,0.5));
	return f;
}
