#include <math.h>
#include "func.h"

extern float x, otvet;
extern void func()
{
	otvet = pow(pow(3*x+2,2)-24*x,0.5)/(3*pow(x,0.5)-2/pow(x,0.5));
}
