#include <stdio.h>

int main(void)
{
	double m;
	double v;
	double e;

	printf("질량(kg): ");
	scanf("%lf", &m);

	printf("속도(m/s): ");
	scanf("%lf", &v);

	e = 0.5*m*v*v;

	printf("운동에너지: %lf", e);

	return 0;
}
