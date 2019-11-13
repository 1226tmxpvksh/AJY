#include <stdio.h>

int main(void)
{
	int i;

	for (i = 1; i < 5; i++)
		printf("%d\n", 2 * i);

	for (i = 10; i > 0; i = i - 2)
		printf("Student%d\n", i);
}