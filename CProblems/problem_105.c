#include <stdio.h>
#include <math.h>

int main()
{
	int n; 
	scanf("%d", &n);

	float x_arr[n], y_arr[n];
	x_arr[0] = 1; y_arr[0] = 1;

	float sum = x_arr[0]*x_arr[0] + y_arr[0];
	for (int i = 0; i < n; ++i)
	{
		x_arr[i] = sin(x_arr[i - 1] + 3);
		y_arr[i] = cos(y_arr[i - 1]);
		sum += (x_arr[i]*x_arr[i] + y_arr[i]);
	}

	printf("%f\n", sum);
	return 0;
}