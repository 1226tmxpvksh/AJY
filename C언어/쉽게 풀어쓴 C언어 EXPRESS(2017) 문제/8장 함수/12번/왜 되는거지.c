#include <stdio.h>

int g = 1;
int sub(void);

int main()
{
	int b = 5;

	printf("%d ", sub());
	printf("%d ", sub());
	printf("%d \n", g + b);

	return 0;
}

int sub(void)
{
	static int s = 10;

	return s++ + g++;
}