#include <stdio.h>

int main(void)
{
	double x;
	double y;
	double z;
	double sum;
	double avg;

	printf("실수를 입력하시오");
	scanf("%lf", &x);

	printf("실수를 입력하시오");
	scanf("%lf", &y);

	printf("실수를 입력하시오");
	scanf("%lf", &z);

	sum = x + y + z;
	avg = sum / 3.0;

	printf("합은 %lf이고, 평균은 %lf 입니다", sum, avg);

	return 0;
}