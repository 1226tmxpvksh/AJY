#include <stdio.h>

int main()
{
	int binary[6] = { 0 };
	int n;

	printf("숫자 입력:");
	scanf_s("%d", &n);

	for (int i = 0; i < 32 && n>0; i++)
	{
		binary[i] = n % 2;
		n = n / 2;
	}

	for (int i = 5; i >= 0; i--)
		printf("%d ", binary[i]);

}