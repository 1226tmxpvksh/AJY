#include <stdio.h>

int main(void)
{
	int x, y,z,w;

	printf("2개의 정수를 입력하시오:");
	scanf("%d %d", &x, &y);

	z = x / y;
	w = x % y;

	printf("몫: %d 나머지:%d", z, w);

	return 0;

}