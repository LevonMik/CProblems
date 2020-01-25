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

	double sum = 0;

	for (int i = 1; i <= n; ++i)
	{
		double power = i*i*pow(x, 2*i);
		sum += power/factorial(i); 
	}

	printf("%.2f\n", sum);
	return 0;
}