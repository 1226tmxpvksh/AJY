#include <stdio.h>

int main(void)
{
	int counter, i;

	printf("ī������ �ʱⰪ�� �Է��Ͻÿ�:");
	scanf("%d", &counter);

	for (i = counter; i >= 1; i--)
	{
		printf("%d ", i);
	}
	
	return 0;
}