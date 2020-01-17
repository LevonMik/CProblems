#include <stdio.h>

int main()
{
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);

	int diff = b - a;
	if (c - b == diff && d - c == diff)
	{
		printf("true\n");
	}
	else
		printf("false\n");

	return 0;
}