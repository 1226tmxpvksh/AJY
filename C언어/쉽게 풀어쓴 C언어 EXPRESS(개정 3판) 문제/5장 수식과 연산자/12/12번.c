#include <stdio.h>

int main(void)
{
	int x, y;

	printf("x��ǥ:");
	scanf("%d", &x);

	printf("y��ǥ:");
	scanf("%d", &y);

	(x > 0) ? ((y > 0) ? printf("1��и�") : printf("4��и�")) : ((y > 0) ? printf("2��и�") : printf("3��и�"));

	return 0;

}