#include <stdio.h>
#include <math.h>

int main()
{
	int x;
	scanf("%d", &x);

	const int param_lim = 4;

	for (int k = 1; k <= param_lim; ++k)
	{
		int result;
		if (x > 1)
		{
			result = 3*pow(x, k + 1);
		}
		else
		{
			result = 5*x + pow(k, 7);
		}

		printf("%d\n", result);
	}

	return 0;
}