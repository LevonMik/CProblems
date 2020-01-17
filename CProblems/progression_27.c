#include <stdio.h>

int main()
{
	float a, b, c;
	scanf("%f %f %f", &a, &b, &c);

	float dif = b - a;

	if (c - b == dif)
		printf("true\n");
	else
		printf("false\n");

	return 0;
}