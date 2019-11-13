#include <stdio.h>

int main(void)
{
	int x, y;
	printf("x,y°ª : ");
	scanf("%d%d", &x, &y);

	(x > y) ? printf("1") : printf("0");

	if (x > y) 
		printf("1");
	else
		printf("0");

}