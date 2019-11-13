#include <stdio.h>

int scalar_mult(int a[][3], int scalar);
int transpose(int a[][3], int b[][3]);

int main()
{
	int list[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int scalar = 2;
	int list2[3][3] = { 0 };

	scalar_mult(list,  scalar);
	transpose(list, list2);
}

int scalar_mult(int a[][3], int scalar)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", a[i][j] * 2);
		}
		printf("\n");
	}
}

int transpose(int a[][3], int b[][3])
{
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			b[j][i] = a[i][j];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}
}