#include <stdio.h>
double round(double f);

int main(void)
{
	double f;

	printf("실수를 입력하시오:");
	scanf("%lf", &f);

	printf("반올림한 값은 %0.lf입니다", round(f));
}

double round(double f)
{
	return (int)(f+0.5);
}