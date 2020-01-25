#include <stdio.h>
#include <math.h>

int main()
{
	int x;
	scanf("%d", &x);

	const int param_lim = 10;

	for (int k = 2; k <= param_lim; ++k)
	{
		int result;

		if (x > 3 && x < 5)
		{
			result = pow(x, k + 6);
		}
		else if (x <= 3)
		{
			result = x + pow(k, 4);
		}
		else
		{
			result = pow(5, 6);
		}

		printf("%d\n", result);
	}

	return 0;
}