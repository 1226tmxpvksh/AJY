#include <stdio.h>
int get_tax(int income);

int main(void)
{
	int it;

	printf("�ҵ��� �Է��Ͻÿ�(����):");
	scanf("%d", &it);

	get_tax(it);
}

int get_tax(int income)
{
	if (income <= 1000)
	{
		income = income * (8 / 100);
		printf("�ҵ漼�� %d�Դϴ�", income);
	}
	else
	{
		income = income * (10 / 100);
		printf("�ҵ漼�� %d�Դϴ�", income);
	}
}