#include <stdio.h>

int show_digit(int x);

int main()
{
	int x;
	printf("������ �Է��Ͻÿ�:");
	scanf_s("%d", &x);

	show_digit(x);
}

int show_digit(int x)
{
	if (x / 10>0)
	{
		return show_digit(x/10);
	}
	printf("%d", x % 10);
}