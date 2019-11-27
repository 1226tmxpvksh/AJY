#include <stdio.h>
#include "idpw.h"

struct member
{
	char id[10];
	char pw[10];
	char name[10];
	int age;
};

struct member m[10];

void idpw()
{
	int menu;

	printf("1.회원가입\n2.로그인\n3.종료\n");
	printf("메뉴를 선택하십시오: ");
	scanf_s("%d", &menu);

	while (1)
	{
		if (menu == 1)
		{
			memberjoin();
		}
		else if (menu == 2)
		{
			login();
		}
		else
		{
			break;
		}

	}
}

void memberjoin()
{
	printf("아이디를 입력하시오: ");
	scanf_s("%d", m[0].id);
	printf("비밀번호를  입력하시오: ");
	scanf_s("%d", m[0].pw);
	printf("이름을 입력하시오: ");
	scanf_s("%d", m[0].name);
	printf("나이를 입력하시오: ");
	scanf_s("%d", m[0].age);
}

void login()
{
	printf("아이디를 입력하시오: ");
	printf("비밀번호를 입력하시오: ");
}