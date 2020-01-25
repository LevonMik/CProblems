#include <stdio.h>
#include <math.h>

int main()
{
	const int first_edge = 9;
	const int second_edge = 5;

	int a;
	scanf("%d", &a);

	int sum = 0;
	int inner_sum = 0;
	for (int k = 1; k <= first_edge; ++k)
	{
		for (int m = 1; m <= second_edge; ++m)
		{
			inner_sum += a*m*m + k*k;
		}

		sum += inner_sum;
	}

	printf("%d\n", sum);

	return 0;
}