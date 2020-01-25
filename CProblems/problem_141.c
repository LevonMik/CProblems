#include <stdio.h>
#include <math.h>

int main()
{
	const int mult_edge = 5;
	const int sum_edge = 6;

	int a;
	scanf("%d", &a);

	unsigned long int mult = 1;
	int sum = 0;
	for (int m = 0; m <= mult_edge; ++m)
	{
		for (int n = 0; n <= sum_edge; ++n)
		{
			sum += pow(a, m + n);
		}

		mult *= sum;
	}

	printf("%d\n", sum);
	return 0;
}