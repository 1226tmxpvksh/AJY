#include <stdio.h>

int seat(int x);

int main()
{
	int x;

	printf("������ �Է��Ͻÿ�:");
	scanf_s("%d", &x);

	printf("�ڸ����� ����:%d", seat(x));
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