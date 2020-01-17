#include <stdio.h>

int main()
{
	int num;
	scanf("%d", &num);
	if (num > 999 || num < 100)
		printf("Invalid number");

	int hund = num/100;
	int dec = num/10%10;
	int miav = num%10;

	if (hund + dec == miav)
		printf("true\n");
	else
		printf("false\n");

	return 0;
}