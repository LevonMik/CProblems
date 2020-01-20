#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int n;
	scanf("%d", &n);

	double arr[n + 1];
	arr[0] = 1;
	for (int i = 1; i < n + 1; ++i)
	{
		arr[i] = 3.4*abs(arr[i-1] - 7);
	}

	int j = 0;
	double sum = 0;
	for (int i = n; i <= 2*n; ++i)
	{
		sum += arr[j];
		++j;
	}

	printf("%f\n", sum);
	return 0;
}