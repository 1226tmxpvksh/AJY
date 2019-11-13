/*조건연산자?만을 이용하여 몇사분면인지 표시하는 프로그램*/

#include<stdio.h>
int main()
{
	int x, y;
	printf("x 좌표를 입력하시오 : ");
	scanf("%d", &x);
	printf("y 좌표를 입력하시오 : ");
	scanf("%d", &y);

	(x > 0) ? ((y > 0) ? printf("1사분면") : printf("4사분면")) : ((y > 0) ? printf("2사분면") : printf("3사분면"));
	return 0;
}