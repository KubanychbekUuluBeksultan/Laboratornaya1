#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Option 1
void main()
{
	float x = 2.4;
	float fx = pow(pow(3*x+2,2)-24*x,0.5)/(3*pow(x,0.5)-2/pow(x,0.5));
	printf("x =  %.4f\nf(x) = %.4f", x, fx);
	printf("\nGive me x:\n");
	scanf("%f", &x);
	fx = pow(pow(3*x+2,2)-24*x,0.5)/(3*pow(x,0.5)-2/pow(x,0.5));
	printf("x =  %.4f\nf(x) = %.4f\n", x, fx);
	system("pause");
    return;
}
