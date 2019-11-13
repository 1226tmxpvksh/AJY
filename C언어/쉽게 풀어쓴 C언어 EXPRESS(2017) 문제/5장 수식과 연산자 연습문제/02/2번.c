#include <stdio.h>

int main()
{
	double x, y;

	printf("2개의 실수를 입력하시오: ");
	scanf("%lf %lf", &x, &y);

	printf("합: %lf", x + y);
	printf("차: %lf", x - y);
	printf("곱: %lf", x * y);
	printf("몫: %lf \n", x / y);

	return 0;

}

