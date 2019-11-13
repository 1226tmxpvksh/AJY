#include <stdio.h>
int is_leap(int year);

int main()
{
	int y;
	printf("연도를 입력하시오:");
	scanf("%d", &y);

	is_leap(y);
}

int is_leap(int year)
{
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		printf("%d년은 366입니다",year);
	else
		printf("%d년은 365입니다",year);

	return 0;
}