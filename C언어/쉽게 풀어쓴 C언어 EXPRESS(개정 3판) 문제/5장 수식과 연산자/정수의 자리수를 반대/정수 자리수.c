#include <stdio.h>

int main(void)
{
	int input;

	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &input);

	while (input > 0)
	{
		printf("%d",input % 10);
		input = input / 10;
	}
}