#include <stdio.h>
#include "cancel.h"

extern int seat[10][10];
extern int seat1, seat2;

void cancel()
{
	while (1)
	{
		printf("-------------------------------------\n");
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				printf("%d ", seat[i][j]);
			}
			printf("\n");
		}
		printf("-------------------------------------\n");
		printf("\n");
		printf("���° �¼��� ����Ͻðڽ��ϱ�: ");
		scanf_s("%d %d", &seat2, &seat1);

		if (seat2 < 0 || seat2>10 || seat1 < 0 || seat1>10)
		{
			printf("1����10������ �ڸ��� �����ϼ���\n");
			break;
		}

		if (seat[seat2 - 1][seat1 - 1] != 0)
		{
			seat[seat2 - 1][seat1 - 1] = 0;
			printf("���� ��� �Ǿ����ϴ�.\n");
			break;

		}
		else
		{
			printf("����� �¼��� �ƴմϴ�.\n");
			continue;
		}
	}
}