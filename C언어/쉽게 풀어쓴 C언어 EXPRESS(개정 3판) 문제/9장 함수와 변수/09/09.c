#include <stdio.h>

int seat(int x);

int main()
{
	int x;

	printf("������ �Է��Ͻÿ�:");
	scanf_s("%d", &x);

	printf("�ڸ����� ��:%d", seat(x));
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