/*지구의 반지름을 구하는 프로그램*/

#include<stdio.h>
#define PIE 3.14
int main()
{
	double dis, ang, r;
	printf("거리를 입력하시오 : ");
	scanf("%lf", &dis);
	printf("각도를 입력하시오 : ");
	scanf("%lf", &ang);

	r = dis * (360.0 / ang) / 2 / PIE;

	printf("지구의 반지름은 : %lf", r);
	return 0;;
}