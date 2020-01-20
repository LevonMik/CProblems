#include <stdio.h>
#include <math.h>

int main()
{
	for (int x = -4; x <= 5; ++x)
	{
		if (x > 1)
		{
			float y_func = log(x)/log(4);
			printf("%f\n", y_func);
		}

		printf("%d\n", -9);
	}

	return 0;
}