#include <stdio.h>
#define PI 3.141592

int main(void)
{
	double x;

	printf("구의 반지름을 입력하시오 : ");
	scanf("%lf", &x);

	printf("표면적은 %lf입니다\n", 4 * PI*x*x);
	printf("체적은 %lf입니다", 4*(PI*x*x*x)/3);

	return 0;

}