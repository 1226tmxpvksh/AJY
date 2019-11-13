#include <stdio.h>
#include "reservation.h"

extern int seat[10][10];
extern int seat1, seat2;

void reservation()
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
		printf("몇번째 좌석을 선택하시겠습니다까?(행 열):");
		scanf_s("%d %d", &seat2, &seat1);

		if (seat2 < 0 || seat2 >10 || seat1 < 0 || seat1>10)
		{
			printf("1부터10까지의 자리를 선택하세요\n");
			break;
		}

		if (seat[seat2 - 1][seat1 - 1] == 0)
		{
			seat[seat2 - 1][seat1 - 1] = 1;
			printf("예약되었습니다\n");
			break;
		}
		else if ((seat[seat2 - 1][seat1 - 1]) == 1)
		{
			printf("예약된 자리 입니다.\n");
		}
	}
}