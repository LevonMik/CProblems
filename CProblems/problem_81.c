#include <stdio.h>
#include <math.h>

int main()
{
	for (double x = -7.5; x <= 8.3; x += 0.3)
	{
		float y_func = log(x*x + 4)/log(3);
		printf("x = %5f y = %7f\n", x, y_func);
	}

	return 0;
}