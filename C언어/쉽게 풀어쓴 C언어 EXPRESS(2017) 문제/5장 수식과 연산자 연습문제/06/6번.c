#include <stdio.h>

int main(void)
{
	int d;

	printf("정수를 입력하시오: ");
	scanf("%d", &d);

	printf("2의 보수:%d", ~d + 1);

	return 0;
}