#include <stdio.h>
#include <math.h>

int factorial(int n)
{
	int fact = 1;
	for (int i = 2; i <= n; ++i)
	{
		fact *= i;
	}

	return fact;
}

int main()
{
	int x, n;
	scanf("%d %d", &n, &x);

	float sum = 0;

	for (int i = 1; i <= n; ++i)
	{
		sum += pow(log(3), i)/factorial(i)*pow(x, i);
	}

	printf("%.2f\n", sum);

	return 0;
}