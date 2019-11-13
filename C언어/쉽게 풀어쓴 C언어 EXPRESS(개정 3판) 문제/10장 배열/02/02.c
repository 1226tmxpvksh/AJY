#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int x[10] = {0};
	srand((unsigned)time(NULL));

	for (int i = 0; i < 10; i++)
	{
		x[i] = rand();
	}

	int max = x[0], min = x[0];
	for (int i = 1; i < 10; i++)
	{
		max = (max > x[i]) ? max : x[i];
	}
	for (int i = 0; i < 10; i++)
	{
		min = (min < x[i]) ? min : x[i];
	}

	printf("최대값은%d\n", max);
	printf("최소값은%d", min);
}