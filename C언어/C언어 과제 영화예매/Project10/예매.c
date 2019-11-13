#include <stdio.h>

void reservation();
void cancel();

int menu;
int seat[10] = { 0 };
int seat1;

int main()
{
	while (1)
	{
		printf("1.예약\n2.취소\n3.종료\n메뉴를선택하시오:");
		scanf_s("%d", &menu);

		if (menu == 1)
		{
			reservation();
		}
		else if (menu == 2)
		{
			cancel();
		}

		else if (menu == 3)
		{
			break;
		}
		else
		{
			printf("1번부터 3번을 입력하십시오\n");
			continue;
		}
	}
}

void reservation()
{
	while (1)
	{
		int x = 0;

		printf("-------------------------------------\n");
		printf("1 2 3 4 5 6 7 8 9 10\n");
		printf("-------------------------------------\n");

		for (int i = 0; i < 10; i++)
		{
			printf("%d ", seat[i]);
		}
		printf("\n");
		printf("몇번째 좌석을 선택하시겠습니다까?:");
		scanf_s("%d", &seat1);
		if (seat1 <= 0 || seat1 > 10)
		{
			printf("1부터10까지의 자리를 선택하세요\n");
			continue;
		}
		if (seat[seat1 - 1] == 0)
		{
			seat[seat1 - 1] = 1;
			printf("예약되었습니다\n");
			break;
		}
		else if ((seat[seat1 - 1]) == 1)
		{
			printf("예약된 자리 입니다.\n");
		}

	}
}

void cancel()
{
	while (1)
	{
		printf("-------------------------------------\n");
		printf("1 2 3 4 5 6 7 8 9 10\n");
		printf("-------------------------------------\n");

		for (int i = 0; i < 10; i++)
		{
			printf("%d ", seat[i]);
		}
		printf("\n");
		printf("몇번째 좌석을 취소하시겠습니까: ");
		scanf_s("%d", &seat1);

		if (seat1 <= 0 || seat1 > 10)
		{
			printf("1부터10까지의 자리를 선택하세요\n");
			continue;
		}
		if (seat[seat1 - 1] != 0)
		{
			seat[seat1 - 1] = 0;
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