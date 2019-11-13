#include <stdio.h>

int main(void)
{
	double w;
	double h;
	double d;
	double y;

	printf("상자를 가로 세로 높이를 한번에 입력: ");
	scanf("%lf %lf %lf", &w ,&h, &d);

	y = w * h*d;

	printf("상자의 부피는 %lf입니다", y);

	return 0;
}