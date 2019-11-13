#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100

int count(int a[], int b[]);

int main()
{
	srand((unsigned)time(NULL));

	int x[SIZE] = { 0 };
	int y[10] = { 0 };

	for (int i = 0; i < SIZE; i++)
	{
		x[i]=rand() % 10;
	}
	count(x, y);

}

int count(int a[], int b[])
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			if (i == a[j])
				b[j]++;
		}
	}
	int max = b[0];

	for (int i = 0; i < 10; i++)
	{
		max = max > b[i] ? max : b[i];
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d=%d", i, b[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		if (max == b[i])
			printf("가장 많이 나온수=%d",i);
	}
}