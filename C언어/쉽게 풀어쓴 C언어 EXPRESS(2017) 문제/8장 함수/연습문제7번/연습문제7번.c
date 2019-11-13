#include <stdio.h>
int get_tax(int income);

int main(void)
{
	int it;

	printf("소득을 입력하시오(만원):");
	scanf("%d", &it);

	get_tax(it);
}

int get_tax(int income)
{
	if (income <= 1000)
	{
		income = income * (8 / 100);
		printf("소득세는 %d입니다", income);
	}
	else
	{
		income = income * (10 / 100);
		printf("소득세는 %d입니다", income);
	}
}