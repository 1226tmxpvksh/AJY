#include <stdio.h>

int main(void)
{
	int o,x,PI,IN;
	double y,d;

	PI = 12 * 2.54;
	IN = 2.54;
	printf("키를 입력하시오:");
	scanf("%d", &o);

	x = o / PI;
	d = o % PI;

	y = d / IN;

	printf("%dcm는 %d피트 %lf인치입니다", o, x, y);

	return 0;
}