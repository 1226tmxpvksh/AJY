#include <stdio.h>

int main()
{
	double x, y;

	printf("2���� �Ǽ��� �Է��Ͻÿ�: ");
	scanf("%lf %lf", &x, &y);

	printf("��: %lf", x + y);
	printf("��: %lf", x - y);
	printf("��: %lf", x * y);
	printf("��: %lf \n", x / y);

	return 0;

}

