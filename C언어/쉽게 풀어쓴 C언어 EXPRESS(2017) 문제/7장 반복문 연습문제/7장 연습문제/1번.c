#include <stdio.h>

int main(void)
{
	int counter, i;

	printf("카운터의 초기값을 입력하시오:");
	scanf("%d", &counter);

	for (i = counter; i >= 1; i--)
	{
		printf("%d ", i);
	}
	
	return 0;
}