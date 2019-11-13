#include <stdio.h>
#include "reservation.h"
#include "cancel.h"
#include "idpw.h"

int seat[10][10] = { 0 };
int seat1, seat2;

int main()
{
	idpw();

	while (1)
	{
		int menu;

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