#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand((unsigned)time(NULL));
	int list[5][4] = { {1},{2},{3},{4},{5} };

	for (int i = 0; i < 5; i++)
		for (int j = 1; j < 4; j++)
			list[i][j] = rand() % 100;

	int max[5];
	int min[5];

	for (int i = 1; i < 4; i++)
	{
		max[i] = list[0][i];
		min[i] = list[0][i];
		for (int j = 0; j < 5; j++)
		{
			if (list[j][i])
			{
				max[i] = max[i] > list[j][i] ? max[i] : list[j][i];
				min[i] = min[i] < list[j][i] ? min[i] : list[j][i];
			}

		}
		printf("시험 #%d의 최대점수=%d\n", i, max[i]);
		printf("시험 #%d의 최소점수=%d\n", i, min[i]);
	}
}