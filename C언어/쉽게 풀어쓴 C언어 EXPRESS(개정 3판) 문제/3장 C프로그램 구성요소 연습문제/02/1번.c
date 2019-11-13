#include <stdio.h>

int main(void)
{
	double x;

	printf("실수를 입력하시오");
	scanf("%lf", &x);

	printf("실수형식으로 %f입니다\n",x);
	printf("정수형식으로 %e입니다",x);

	return 0;
}