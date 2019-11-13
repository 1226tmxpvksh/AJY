#include <stdio.h>
#include <stdlib.h>
void sieve(int s[], int size);

int main(void)
{
	int     top_value = 100;
	int     count = top_value - 1;
	int    my_array[101];
	int     i, prime, multiple;
	for (i = 2; i <= top_value; ++i)
		my_array[i] = 1;
	for (prime = 2; prime <= top_value; ++prime)
	{
		if (my_array[prime])
			for (multiple = 2 * prime; multiple <= top_value; multiple += prime)
				my_array[multiple] = 0;
	}
	for (i = 2; i <= top_value; ++i)
	{
		if (my_array[i])
			printf("%d ", i);
	}
	return 0;
}

#include <stdio.h>
#include <time.h>

int main()
{
	int board[10][10] = { 0 };
	srand(time(NULL));

	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++)
			if ((rand() % 100) < 30)
				board[i][j] = 1;

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++)
			if (board[i][j])
				printf("# ");
			else
				printf(". ");
		printf("\n");
	}
	return 0;
}