#include <stdio.h>

int main(void)
{
	double m, v, E;

	printf("����(kg): ");
	scanf("%lf", &m);

	printf("�ӵ�(m/s): ");
	scanf("%lf", &v);

	E = m * v*v / 2.0;

	printf("�������(J): %lf ", E);

	return 0;

}