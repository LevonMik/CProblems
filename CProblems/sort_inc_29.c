#include <stdio.h>

float min(float a, float b)
{
	if (a > b)
		return b;
	if (b > a)
		return a;
}

float max(float a, float b)
{
	if (a > b)
		return a;
	if (b > a)
		return b;
}

int main()
{
	float a, b, c;
	scanf("%f %f %f", &a, &b, &c);

	float low, mid, high;

	low = min(min(a, b), c);
	high = max(max(a, b), c);
	printf ("%f %f %f\n", low, a + b + c - high - low, high);

}