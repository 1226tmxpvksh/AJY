#include <stdio.h>

int main(void)
{
	int grade, n;
	double average, sum;

	n = 0;
	sum = 0;
	grade = 0;

	printf("�����Ϸ��� �������� �Է��ϱ��\n");

	while (grade >= 0)
	{
		printf("������ �Է��Ͻÿ�:");
		scanf("%d", &grade);

		sum += grade;
		n++;
	}

	sum = sum - grade;
	n--;

	average = sum / n;

	printf("������ ����� %d�Դϴ�", average);
	return 0;
}