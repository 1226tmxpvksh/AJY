#include <stdio.h>

int main(void)
{
	double w;
	double h;
	double d;
	double y;

	printf("���ڸ� ���� ���� ���̸� �ѹ��� �Է�: ");
	scanf("%lf %lf %lf", &w ,&h, &d);

	y = w * h*d;

	printf("������ ���Ǵ� %lf�Դϴ�", y);

	return 0;
}