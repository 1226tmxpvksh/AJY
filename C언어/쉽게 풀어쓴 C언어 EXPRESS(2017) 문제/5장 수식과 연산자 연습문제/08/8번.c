#include <stdio.h>
#define PI 3.141592

int main(void)
{
	double x;

	printf("���� �������� �Է��Ͻÿ� : ");
	scanf("%lf", &x);

	printf("ǥ������ %lf�Դϴ�\n", 4 * PI*x*x);
	printf("ü���� %lf�Դϴ�", 4*(PI*x*x*x)/3);

	return 0;

}