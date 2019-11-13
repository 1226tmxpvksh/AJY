#include <Stdio.h>

int main(void)
{
	int x, y;

	for (y = 1; y <= 7; y++)
	{
		for (x = 1; x <= 7 - y; x++)
			printf("*");
		for (x = 0; x < y; x++)
			printf(" ");
		printf("\n");

	}
	return 0;
}