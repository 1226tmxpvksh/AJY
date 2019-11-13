#include <Stdio.h>

int main(void)
{
	int i, j;
	 
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			printf("%d °öÇÏ±â %d´Â %d\n", i, j, i*j);
}