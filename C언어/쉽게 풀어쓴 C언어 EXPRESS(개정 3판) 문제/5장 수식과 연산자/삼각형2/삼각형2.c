#include <stdio.h>

int main(void)
{
	int height;
	int i, j, k;

	height = 5;

	for (i = 1; i <= height; i++)
	{
		for (j = 1; j <= height - i; j++)
		{
			printf(" ");
		}

		for (k = 1; k <= (2 * i) - 1; k++)
		{
			printf("*");
		}

		printf("\n");
	}

	return 0;
}