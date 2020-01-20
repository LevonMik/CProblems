#include <stdio.h>
#include <math.h>

int main()
{
	for (float x = 2.4; x < 7.6; x = x + 0.2)
	{
		float y_func = tan(2*x + x*x);
		printf("%f\n", y_func); 
	}

	return 0;
}