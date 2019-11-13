#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int b_rand(int r);
int main()
{
	srand((unsigned)time(NULL));

	int num=0;
	for (int i = 0; i < 10; i++)
		printf("%d ", b_rand(num));
}

int b_rand(int r)
{
	r = rand() % 2;

	return r;
}