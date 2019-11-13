#include <stdio.h>

int main(void)
{
	double perimeter, area, w, h;

	printf("가로:");
	scanf("%lf", &w);

	printf("세로:");
	scanf("%lf", &h);

	area = w * h;
	perimeter = 2 * (w+ h);

	printf("사각형의 넓이: %lf, 사각형의 둘레: %lf", area, perimeter);

	return 0;



}