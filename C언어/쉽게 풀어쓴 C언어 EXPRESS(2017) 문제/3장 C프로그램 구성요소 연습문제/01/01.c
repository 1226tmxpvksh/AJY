#include <stdio.h>

int main(void)
{
	double x;
	double y;
	double z;
	double sum;
	double avg;

	printf("�Ǽ��� �Է��Ͻÿ�");
	scanf("%lf", &x);

	printf("�Ǽ��� �Է��Ͻÿ�");
	scanf("%lf", &y);

	printf("�Ǽ��� �Է��Ͻÿ�");
	scanf("%lf", &z);

	sum = x + y + z;
	avg = sum / 3.0;

	printf("���� %lf�̰�, ����� %lf �Դϴ�", sum, avg);

	return 0;
}