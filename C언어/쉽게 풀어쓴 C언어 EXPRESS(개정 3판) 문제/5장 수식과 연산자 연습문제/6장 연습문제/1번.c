#include <stdio.h>

int main(void)
{
	int x, y,z,w;

	printf("2���� ������ �Է��Ͻÿ�:");
	scanf("%d %d", &x, &y);

	z = x / y;
	w = x % y;

	printf("��: %d ������:%d", z, w);

	return 0;

}