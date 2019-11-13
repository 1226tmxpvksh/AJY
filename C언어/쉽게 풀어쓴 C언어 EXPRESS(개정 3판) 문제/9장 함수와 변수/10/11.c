#include <stdio.h>

int reoursiven(int x, int y);

int main()
{
	int n, k;

	printf("n=");
	scanf_s("%d", &n);

	printf("k=");
	scanf_s("%d", &k);

	printf("%d", reoursiven(n, k));
}

int reoursiven(int x, int y)
{
	if (y==0||y==x)
	{
		return 1;
	}
	else
	{
		return reoursiven(x - 1, y - 1) + reoursiven(x - 1, y);
	}

}