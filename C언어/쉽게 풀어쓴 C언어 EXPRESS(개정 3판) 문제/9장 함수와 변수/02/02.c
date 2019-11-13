#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void get_dice_face();

int main()
{
	srand((unsigned)time(NULL));
	 
	get_dice_face();
}
void get_dice_face()
{
	static int b = 0;
	static int c[7] = { 0 };
	for (int i = 0; i < 100; i++)
	{
		b = rand() % 6+1;
		
		for (int i = 1; i < 7; i++)
		{
			if (b == i)
			{
				c[i]++;
			}
		}
	}
	for (int i = 1; i < 7; i++)
	{
		printf("%d -> %d\n", i, c[i]);
	}
}