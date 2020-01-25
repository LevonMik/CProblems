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
	int n, x;
	scanf("%d %d", &n, &x);

	float mult = 1;

	for (int i = 1; i <= n; ++i)
	{
		mult *= (x + cos(i*x))/(pow(2, i)*factorial(i));
	}

	printf("%.3f\n", mult);
	return 0;
}