#include <stdio.h>
double square(double x);

int main(void)
{
	double x, y;

	printf("������ �Է��Ͻÿ�:");
	scanf("%lf", &x);

	y = square(x);

	printf("�־��� ���� %lf�� ������ %lf�Դϴ�", x, y);
}

double square(double x)
{
	double p;
	p = x * x;
	return(p);
}