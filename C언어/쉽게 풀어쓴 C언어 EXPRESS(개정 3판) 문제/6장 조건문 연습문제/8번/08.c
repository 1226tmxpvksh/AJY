#include <stdio.h>

int main(void)
{
	int hour, age;

	printf("���� �ð��� ���̸� �Է��Ͻÿ�:");
	scanf("%d %d", &hour, &age);

	if (hour < 17)
	{
		if (age > 12 && age < 65)
			printf("����� 25000�Դϴ�");
		else
			printf("����� 34000�Դϴ�");
	}
	else
		printf("����� 10000�Դϴ�");
	return 0;
}