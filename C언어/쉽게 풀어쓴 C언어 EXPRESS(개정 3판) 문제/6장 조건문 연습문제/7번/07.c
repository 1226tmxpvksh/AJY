#include <stdio.h>

int main(void)
{
	int height, weight, standard_weight;

	printf("ü�߰� Ű�� �Է��Ͻÿ�:");
	scanf("%d %d", &weight, &height);

	standard_weight = (height - 100)*0.9;

	if (weight == standard_weight)
		printf("ǥ���Դϴ�");
	else if (weight < standard_weight)
		printf("��ü���Դϴ�");
	else
		printf("��ü���Դϴ�");

	return 0;
}