#include <stdio.h>
#include "login.h"
#include "idpw.h"
#include "reservation.h"
#include "cancel.h"

void login()
{
	char id[10];
	char pw[10];
	int condition = 0;
	while (1)
	{
		printf("로그인\n");
		printf("아이디를 입력하시오: ");
		scanf("%s", id);
		printf("비밀번호를 입력하시오: ");
		scanf("%s", pw);

		for (int j = 0; j < 10; j++)
		{
			if (strcmp(user[j].id, id) == 0 && strcmp(user[j].pw, pw) == 0)
			{
				condition = 1;
			}
			else if (strcmp(user[j].id, id) != 0)
			{
			}
			else if (strcmp(user[j].pw, pw) != 0)
			{
			}
		}
		if (condition == 1)
		{
			printf("로그인 성공\n");
			select();
			break;
		}
		else if (condition == 0)
		{
			printf("로그인 실패\n");
			continue;
		}
	}
}

void select()
{
	while (1)
	{

		int menu;

		printf("1.예약\n2.취소\n3.종료\n메뉴를선택하시오: ");
		scanf_s("%d", &menu);

		if (menu == 1)
		{
			reservation();
			continue;
		}
		else if (menu == 2)
		{
			cancel();
			continue;
		}

		else if (menu == 3)
		{
			exit();
		}
		else
		{
			printf("1번부터 3번을 입력하십시오\n");
			continue;

		}
		break;

	}
}