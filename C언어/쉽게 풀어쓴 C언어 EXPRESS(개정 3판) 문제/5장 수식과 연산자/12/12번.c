#include <stdio.h>

int main(void)
{
	int x, y;

	printf("x좌표:");
	scanf("%d", &x);

	printf("y좌표:");
	scanf("%d", &y);

	(x > 0) ? ((y > 0) ? printf("1사분면") : printf("4사분면")) : ((y > 0) ? printf("2사분면") : printf("3사분면"));

	return 0;

}