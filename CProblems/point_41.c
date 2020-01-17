#include <stdio.h>

struct Point
{
	int x;
	int y;
};

int main()
{
	struct Point point;
	scanf("%d %d", &point.x, &point.y);

	if (point.x*point.x + point.y*point.y > 1 && 
		point.x*point.x + point.y*point.y < 4)
	{
		printf("%d\n", 0);
	}
	else
		printf("%d\n", point.x + point.y);

	return 0;
}
