#include <stdio.h>
#define SIZE 10

int array_copy(int a[], int b[], int size);
int main()
{
	int x[SIZE] = { 1,2,3 };
	int y[SIZE] = { 0 };

	for (int i = 0; i < SIZE; i++)
		printf("%d", x[i]);
	printf("\n");

	array_copy(x, y, SIZE);

	for (int i = 0; i < SIZE; i++)
	{
		printf("%d", y[i]);
	}
}

int array_copy(int a[], int b[], int size)
{
	for (int i = 0; i < SIZE; i++)
	{
		b[i] = a[i];
	}
}