#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	scanf("%d", &n);

	double x_arr[n];
	double y_arr[n];
	x_arr[0] = 2; y_arr[0] = 0.5;

	double mult = x_arr[0] - y_arr[0];
	for (int i = 1; i < n; ++i)
	{
		x_arr[i] = (x_arr[i - 1] + 2)*(x_arr[i - 1] + 2);
		y_arr[i] = y_arr[i - 1] + 6;
		mult *= (x_arr[i] - y_arr[i]);
	}

	printf("%f\n", mult);
	return 0;
}