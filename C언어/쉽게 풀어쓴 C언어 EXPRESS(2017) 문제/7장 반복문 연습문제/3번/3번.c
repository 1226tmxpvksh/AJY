#include <Stdio.h>

int main(void)
{
	int x;

	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &x);

	printf("���:");
	for (int i = 1; i <= x; i++)
	{
		if (x%i == 0)
			printf("%d ", i);
	}
	return 0;
}