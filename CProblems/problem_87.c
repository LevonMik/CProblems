#include <stdio.h>
#include <math.h>

int main()
{
	for (double x = 10.0; x <= 23.0; x += 3.2)
	{
		if (x > 7)
		{
			float y_func = exp(sin(x));
			printf("x = %5f y = %7f\n", x, y_func);
		}
		else
		{
			printf("%d\n", 0);
		}
		
	}

	return 0;
}