#include <stdio.h>

int main()
{
	printf("This code returns 'a' if hundreds + tens < 5 in given number, 'b' otherwise\n");

	int num;
	scanf("%d", &num);

	char f;

	int hund = num/100;
	int dec = num/10%10;

	if (hund + dec < 5)
		f = 'a';
	else
		f = 'b';

	printf("%c\n", f);
	return 0;
}