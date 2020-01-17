#include <stdio.h>

int main()
{
	int a, b, c;
	scanf("%d", &a);
	int max = a;
	scanf("%d", &b);
	if (b > max)
		max = b;
	scanf("%d", &c);
	if (c > max)
		max = c;

	printf("%d", max);
}