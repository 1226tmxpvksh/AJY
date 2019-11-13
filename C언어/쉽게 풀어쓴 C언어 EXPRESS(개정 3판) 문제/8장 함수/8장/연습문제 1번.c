#include <stdio.h>
double square(double x);

int main(void)
{
	double x, y;

	printf("정수를 입력하시오:");
	scanf("%lf", &x);

	y = square(x);

	printf("주어진 정수 %lf의 제곱은 %lf입니다", x, y);
}

double square(double x)
{
	double p;
	p = x * x;
	return(p);
}