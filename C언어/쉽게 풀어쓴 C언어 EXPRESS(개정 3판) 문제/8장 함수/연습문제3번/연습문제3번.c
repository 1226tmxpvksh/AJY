#include <stdio.h>
#define PIE 3.141592

double cal_area(double r);

int main(void)
{
	double r;
	printf("���� �������� �Է��Ͻÿ�:");
	scanf("%lf", &r);

	r = cal_area(r);

	printf("���� ������ %f�Դϴ�.\n", r);

	return 0;
}

double cal_area(double r)
{
	double area;

	area = PIE * r*r;

	return area;
}