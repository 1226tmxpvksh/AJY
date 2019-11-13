#include <stdio.h>

int main(void)
{
	int x, y, z;

	printf("3개의 정수를 입력하시오:");
	scanf("%d %d %d",&x,&y,&z);

	if (x > y)
	{
		if (y > z)
			printf("제일작은 정수는 %d입니다", z);
		else
			printf("제일작은 정수는 %d입니다", y);
	}
	else
		printf("제일작은 정수는%d입니다", x);

	return 0;
}