#include <stdio.h>
#define SIZE 5

int main()
{
	int list[SIZE] = { 0 };

	int i, j, temp, least;
	
	for (i = 0; i < SIZE; i++)
	{
		printf("ют╥б:");
		scanf_s("%d", &list[i]);
	}
	for (i = 0; i < SIZE - 1; i++)
	{
		least = i;
		for (j = i + 1; j < SIZE; j++)
			if (list[j] < list[least])
				least = j;
		temp = list[i];
		list[i] = list[least];
		list[least] = temp;
	}
	for(i = 0; i < SIZE; i++)
		printf("%d ", list[i]);
	printf("\n");
}