#include <stdio.h>
int is_leap(int year);

int main()
{
	int y;
	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &y);

	is_leap(y);
}

int is_leap(int year)
{
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		printf("%d���� 366�Դϴ�",year);
	else
		printf("%d���� 365�Դϴ�",year);

	return 0;
}