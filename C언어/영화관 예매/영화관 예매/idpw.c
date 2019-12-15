#include <stdio.h>
#include "idpw.h"

member user[10];

void idpw()
{
	int menu;

	while (1)
	{
		printf("1.회원가입\n2.로그인\n3.종료\n");
		printf("메뉴를 선택하십시오: ");
		scanf_s("%d", &menu);

		if (menu == 1)
		{
			memberjoin();
			continue;
		}
		else if (menu == 2)
		{
			login();
			break;
		}

		else if (menu == 3)
		{
			exit();
		}

	}
}

void memberjoin()
{
	int menu;
	static int i = 0;
	int condition=1;
	while (condition)
	{
		condition = 0;
		printf("회원가입\n");
		printf("ID:");
		scanf("%s", &user[i].id);
		printf("PW:");
		scanf("%s", &user[i].pw);
		printf("이름:");
		scanf("%s", &user[i].name);
		printf("나이:");
		scanf("%s", &user[i].age);
		for (int j = 0; j < i; j++)
		{
			if (strcmp(user[i].id, user[j].id) == 0)
			{
				printf("아이디가 중복되었습니다");
				condition = 1;
				break;
			}
		}
	}
	i++;
	idpw();
}

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
			while (1)
			{

				int menu;

				printf("1.예약\n2.취소\n3.종료\n메뉴를선택하시오:\n");
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
		else if (condition == 0)
		{
			printf("로그인 실패");
			continue;
		}
	}
}