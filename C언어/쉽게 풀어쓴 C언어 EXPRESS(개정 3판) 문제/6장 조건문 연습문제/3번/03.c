#include <stdio.h>

int main(void)
{
	int x, y, z;

	printf("3���� ������ �Է��Ͻÿ�:");
	scanf("%d %d %d",&x,&y,&z);

	if (x > y)
	{
		if (y > z)
			printf("�������� ������ %d�Դϴ�", z);
		else
			printf("�������� ������ %d�Դϴ�", y);
	}
	else
		printf("�������� ������%d�Դϴ�", x);

	return 0;
}