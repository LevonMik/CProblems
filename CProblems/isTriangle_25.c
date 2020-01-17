#include <stdio.h>

int main()
{
	float a, b, c;
	scanf ("%f %f %f", &a, &b, &c);

	if (a + b > c)
	{
		if (b + c > a)
		{
			if (c + a > b)
				printf ("y = 1\n");
		}
		
	}
	else
		printf("y = 2\n");

	return 0;
}