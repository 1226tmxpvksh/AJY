#include <stdio.h>

double reoursive(double n);
int main()
{
	int x;

	printf("n°ª:");
	scanf_s("%d", &x);
	printf("%lf",reoursive(x));
}

double reoursive(double n)
{
	if (n == 0)
	{
		return 0;
	}
	else
	{
		return 1.0 / n + reoursive(n - 1);
	}
}