#include <stdio.h>
#define SQMETER_PER_PYEONG 3.3058

int main(void)
{
	double pyeong;

	printf("���� �Է��Ͻÿ�:");
	scanf("%lf", &pyeong);

	printf("%lf������ �Դϴ�", SQMETER_PER_PYEONG*pyeong);

	return 0;
}