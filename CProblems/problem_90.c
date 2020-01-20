#include <stdio.h>
#include <math.h>

int main()
{
	for (double x = -30.0; x <= 30.0; x += 3.5)
	{
		float y_func;
		if (x > 5)
		{
			y_func = sin(x);
		}
		else
		{
			y_func = cos(x);
		}

		printf("x = %5f y = %7f\n", x, y_func);
	}
}