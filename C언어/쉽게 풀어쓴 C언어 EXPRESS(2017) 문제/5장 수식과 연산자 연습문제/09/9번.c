#include <stdio.h>

int main(void)
{
	double x, y, z, w;

	printf("지팡이의 높이를 입력하시오: ");
	scanf("%lf", &x);

	printf("지팡이의 그림자의 길이를 입력하시오:");
	scanf("%lf", &y);

	printf("피라미드까지의 거리를 입력하시오:");
	scanf("%lf", &w);

	z = (w*x)/y;

	printf("피라미드의 높이는 %lf 입니다", z);

	return 0;
}