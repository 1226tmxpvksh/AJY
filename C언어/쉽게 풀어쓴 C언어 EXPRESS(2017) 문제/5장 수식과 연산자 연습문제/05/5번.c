#include <stdio.h>

int main(void)
{
	int d;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &d);

	printf("���� �ڸ�: %d\n", d / 10);
	printf("���� �ڸ�: %d", d % 10);

	return 0;
}