#include <stdio.h>

int main(void)
{
	double x, y, z, p;

	printf("������ ���� ���� ���̸� �ѹ��� �Է�:");
	scanf("%lf %lf %lf", &x, &y, &z);

	p = x * y*z;

	printf("������ ���Ǵ� %lf�Դϴ�", p);

	return 0;
}