#include <stdio.h>

int main(void)
{
	double m;
	double v;
	double e;

	printf("����(kg): ");
	scanf("%lf", &m);

	printf("�ӵ�(m/s): ");
	scanf("%lf", &v);

	e = 0.5*m*v*v;

	printf("�������: %lf", e);

	return 0;
}
