#include <stdio.h>

int main()
{
	int num[10] = { 0 };
	int place[10] = { 1,1,2,2,3,3,4,4,5,5 };
	int n;

	for (int i = 0; i < 10; i++)
	{
		num[i]=i+1;
	}

	printf("��ǰ ��ȣ�� �Է��Ͻÿ�:");
	scanf_s("%d", &n);

	for (int i = 0; i < 10; i++)
	{
		if (n == num[i])
			printf("��ǰ ��ȣ%d�� ��ġ�� %d�Դϴ�", i+1, place[i]);
	}

}