#include <stdio.h>
double round(double f);

int main(void)
{
	double f;

	printf("�Ǽ��� �Է��Ͻÿ�:");
	scanf("%lf", &f);

	printf("�ݿø��� ���� %0.lf�Դϴ�", round(f));
}

double round(double f)
{
	return (int)(f+0.5);
}