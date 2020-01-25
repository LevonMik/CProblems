#include <stdio.h>
#include <math.h>

int main()
{
	const int edge = 7;
	const int inner_edge = 8;

	int c;
	scanf("%d", &c);

	double sum = 0;
	double inner_sum = 0;
	for (int i = 1; i <= edge; ++i)
	{
		for (int k = 1; k <= inner_edge; ++k)
		{
			inner_sum += (c*i + k)/k;
		}

		sum += i*i*inner_sum;
	}

	printf("%.2f\n", sum);

	return 0;
}