#include <stdio.h>

int power(int base,int power_raised);

int main()
{
	int x, y;

	printf("¹Ø¼ö:");
	scanf_s("%d", &x);

	printf("Áö¼ö:");
	scanf_s("%d", &y);

	printf("%d^%d=%d", x, y, power(x, y));
}

int power(int base, int power_raised)
{
	if (power_raised==1)
	{
		return base;
	}
	else
	{
		return base*power(base, power_raised - 1);
	}
}