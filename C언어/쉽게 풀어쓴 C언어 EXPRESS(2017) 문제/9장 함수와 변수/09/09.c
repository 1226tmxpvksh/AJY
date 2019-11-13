#include <stdio.h>

int seat(int x);

int main()
{
	int x;

	printf("정수를 입력하시오:");
	scanf_s("%d", &x);

	printf("자리수의 합:%d", seat(x));
}

int seat(int x)
{
	if (x == 0)
	{
		return 0;
	}
	else
		return (x % 10) + seat(x / 10);
}