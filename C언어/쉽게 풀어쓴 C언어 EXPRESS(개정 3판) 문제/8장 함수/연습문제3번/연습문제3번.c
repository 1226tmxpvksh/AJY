#include <stdio.h>
#define PIE 3.141592

double cal_area(double r);

int main(void)
{
	double r;
	printf("원의 반지름을 입력하시오:");
	scanf("%lf", &r);

	r = cal_area(r);

	printf("원의 면적은 %f입니다.\n", r);

	return 0;
}

double cal_area(double r)
{
	double area;

	area = PIE * r*r;

	return area;
}