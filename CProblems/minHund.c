#include <stdio.h>

int main()
{
	int num;
	scanf("%d", &num);

	int hund = num/100;
	int dec = num/10%10;
	int miav = num%10;

	int max = hund;
	if (dec > max)
		max = dec;
	if (miav > max)
		max = miav;

	printf("%d\n", max);
	return 0;
}