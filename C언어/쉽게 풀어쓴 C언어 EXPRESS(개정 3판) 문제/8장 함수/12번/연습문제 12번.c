#include <stdio.h>
void print_value(int n);
int main()
{
	int x;
	while (1)
	{
		printf("���� �Է��Ͻÿ�(����� ����):");
		scanf_s("%d", &x);
		print_value(x);
		printf("\n");
		if (x < 0)
			break;
	}
}
void print_value(int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("*");
	}
}
