#include <stdio.h>

sub_func(int count);

int main()
{
	int num;
	
	printf("���� ���� ��?");
	scanf_s("%d", &num);

	printf("1���� %d ������ ��:%d \n", num, sub_func(num));

	return 0;
}

sub_func(int num)
{
	if (num > 1)
		return num + sub_func(num - 1);
	else
		return 1;
}