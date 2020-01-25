#include <stdio.h>
#include <math.h>

int main()
{
	const int edge = 14;

	float mult = 1;
	for (int i = 1; i <= edge; ++i)
	{
		float first_arg;
		float second_arg;

		if (i%2 == 0)
		{
			first_arg = exp(3*i - 4);
		}
		else
		{
			first_arg = i*2 - 1;
		}

		second_arg = (i - 1)*(i - 1);

		mult *= first_arg*second_arg*second_arg;
	}

	printf("%f\n", mult);
}