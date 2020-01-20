#include <stdio.h>

int main()
{
	const int n = 16;

	int sum = 0;
	for (int i = 1; i <= n; ++i)
	{
		int first_arg;
		int second_arg;
		if (i%2 == 0)
		{
			first_arg = i*i*i;
			second_arg = i;
		}
		else
		{
			first_arg = i;
			second_arg = i*i;
		}

		sum += (first_arg - second_arg)*(first_arg - second_arg);
	}

	printf("%d\n", sum);
}