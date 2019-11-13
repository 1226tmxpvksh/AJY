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
		printf("몇번째 좌석을 취소하시겠습니까: ");
		scanf_s("%d %d", &seat2, &seat1);

		if (seat2 < 0 || seat2>10 || seat1 < 0 || seat1>10)
		{
			printf("1부터10까지의 자리를 선택하세요\n");
			break;
		}

		if (seat[seat2 - 1][seat1 - 1] != 0)
		{
			seat[seat2 - 1][seat1 - 1] = 0;
			printf("예약 취소 되었습니다.\n");
			break;

		}
		else
		{
			printf("예약된 좌석이 아닙니다.\n");
			continue;
		}
	}
}