#include <stdio.h>

int main(void)
{
	double x, y, z, w;

	printf("�������� ���̸� �Է��Ͻÿ�: ");
	scanf("%lf", &x);

	printf("�������� �׸����� ���̸� �Է��Ͻÿ�:");
	scanf("%lf", &y);

	printf("�Ƕ�̵������ �Ÿ��� �Է��Ͻÿ�:");
	scanf("%lf", &w);

	z = (w*x)/y;

	printf("�Ƕ�̵��� ���̴� %lf �Դϴ�", z);

	return 0;
}