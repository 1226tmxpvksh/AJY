#include <stdio.h>
#include "idpw.h"

member user[10];

void idpw()
{
	int menu;

	while (1)
	{
		printf("1.ȸ������\n2.�α���\n3.����\n");
		printf("�޴��� �����Ͻʽÿ�: ");
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
		printf("ȸ������\n");
		printf("ID:");
		scanf("%s", &user[i].id);
		printf("PW:");
		scanf("%s", &user[i].pw);
		printf("�̸�:");
		scanf("%s", &user[i].name);
		printf("����:");
		scanf("%s", &user[i].age);
		for (int j = 0; j < i; j++)
		{
			if (strcmp(user[i].id, user[j].id) == 0)
			{
				printf("���̵� �ߺ��Ǿ����ϴ�");
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
		printf("�α���\n");
		printf("���̵� �Է��Ͻÿ�: ");
		scanf("%s", id);
		printf("��й�ȣ�� �Է��Ͻÿ�: ");
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
			printf("�α��� ����\n");
			while (1)
			{

				int menu;

				printf("1.����\n2.���\n3.����\n�޴��������Ͻÿ�:\n");
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
					printf("1������ 3���� �Է��Ͻʽÿ�\n");
					continue;

				}
				break;

			}
		}
		else if (condition == 0)
		{
			printf("�α��� ����");
			continue;
		}
	}
}