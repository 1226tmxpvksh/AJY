#include <stdio.h>

int main(void)
{
	int input;

	printf("정수를 입력하시오:");
	scanf("%d", &input);

	while (input > 0)
	{
		printf("%d",input % 10);
		input = input / 10;
	}
}