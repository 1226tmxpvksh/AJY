#include <stdio.h>

int main()
{
	int list[10][3] = { 0 };

	for (int i = 0; i < 10; i++)
	{
		list[i][0] = i + 1;
		list[i][1] = (i + 1)*(i + 1);
		list[i][2] = (i + 1)*(i + 1)*(i + 1);
	}
	int n;
	printf("������ �Ͻÿ�:");
	scanf("%d", &n);
	
	for (int i = 0; i < 10; i++)
	{
		if (n == list[i][2])
			printf("%d�� �������� %d\n", n, i+1);
	}
}