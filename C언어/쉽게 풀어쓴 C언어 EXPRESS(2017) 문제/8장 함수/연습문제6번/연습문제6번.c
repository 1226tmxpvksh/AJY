#include <stdio.h>
int even(int n);
int absolute(int n);
int sign(int n);

int main()
{
	int x;

	printf("������ �Է��Ͻÿ�:");
	scanf_s("%d", &x);

	even(x);
	absolute(x);
	sign(x);
}

int even(int n)
{
	if (n % 2 == 0) {
		printf("even()�� ���:¦��\n");
		return 1;
	}
	else
		printf("even()�� ���:Ȧ��\n");
	return 0;
}

int absolute(int n)
{
	if (n >= 0)
	{
		printf("absolute()�� ���:%d\n", n);
		return 0;
	}
	else
	{
		n = n * (-1);
		printf("absolute()�� ���:%d\n", n);
		return 0;
	}
}

int sign(int n)
{
	if (n > 0)
	{
		printf("sign()�� ���:���\n");
		return 1;
	}
	else if (n == 0)
	{
		printf("sign()�� ���:0\n");
		return 0;
	}
	else
	{
		printf("sign()�� ���:����\n");
		return -1;
	}
}