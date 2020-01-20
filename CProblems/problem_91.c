#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int n;

	scanf("%d", &n);

	float arr[n];

	arr[0] = 1;
	float sum = arr[0]*arr[0];
	for (int i = 1; i < n; ++i)
	{
		arr[i] = 0.5*abs(arr[i - 1] - 4);
		sum += arr[i]*arr[i];
	}

	printf("%f\n", sum);
}