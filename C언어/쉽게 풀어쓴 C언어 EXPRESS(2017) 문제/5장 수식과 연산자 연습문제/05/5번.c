#include <stdio.h>

int main(void)
{
	int d;

	printf("정수를 입력하시오: ");
	scanf("%d", &d);

	printf("십의 자리: %d\n", d / 10);
	printf("일의 자리: %d", d % 10);

	return 0;
}