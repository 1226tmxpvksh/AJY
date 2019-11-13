#include <stdio.h>

int seat(int x);

int main()
{
	int x;

	printf("정수를 입력하시오:");
	scanf_s("%d", &x);

	printf("자리수의 개수:%d", seat(x));
}

int seat(int x)
{
	static int count = 0;
	count++;
	if (x / 10>0)
	{
		seat(x/10);
	}
	return count;
}