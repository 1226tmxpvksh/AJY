#include <stdio.h>
int even(int n);
int absolute(int n);
int sign(int n);

int main()
{
	int x;

	printf("정수를 입력하시오:");
	scanf_s("%d", &x);

	even(x);
	absolute(x);
	sign(x);
}

int even(int n)
{
	if (n % 2 == 0) {
		printf("even()의 결과:짝수\n");
		return 1;
	}
	else
		printf("even()의 결과:홀수\n");
	return 0;
}

int absolute(int n)
{
	if (n >= 0)
	{
		printf("absolute()의 결과:%d\n", n);
		return 0;
	}
	else
	{
		n = n * (-1);
		printf("absolute()의 결과:%d\n", n);
		return 0;
	}
}

int sign(int n)
{
	if (n > 0)
	{
		printf("sign()의 결과:양수\n");
		return 1;
	}
	else if (n == 0)
	{
		printf("sign()의 결과:0\n");
		return 0;
	}
	else
	{
		printf("sign()의 결과:음수\n");
		return -1;
	}
}