#include <stdio.h>

int main(void)
{
	double perimeter, area, w, h;

	printf("����:");
	scanf("%lf", &w);

	printf("����:");
	scanf("%lf", &h);

	area = w * h;
	perimeter = 2 * (w+ h);

	printf("�簢���� ����: %lf, �簢���� �ѷ�: %lf", area, perimeter);

	return 0;



}