#include <stdio.h>

int main(void)
{
	int height, age;

	printf("Ű�� �Է��Ͻÿ�:");
	scanf("%d", &height);

	printf("���̸� �Է��Ͻÿ�:");
	scanf("%d", &age);

	if (height >= 140 && age >= 10)
		printf("Ÿ�� �����ϴ�");
	else
		printf("�˼��մϴ�");

	return 0;
}