#include <stdio.h>
#include <math.h>

#define PI 3.14

int main()
{
	for (float x = -PI; x <= PI; x += PI/8.0)
	{
		float y_func = sin(x)*sin(x) + cos(x);
		printf("%f\n", y_func);
	}

	return 0;
}