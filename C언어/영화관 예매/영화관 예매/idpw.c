#include <stdio.h>
#include "idpw.h"
#include "file.h"

void idpw()
{
	int menu;

	while (1)
	{
		printf("1.ȸ������\n2.�α���\n3.����\n");
		printf("�޴��� �����Ͻʽÿ�:");
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

int memberjoin()
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
				printf("���̵� �ߺ��Ǿ����ϴ�\n");
				condition = 1;
				break;
			}
		}
	}
	order = i;
	file();
	i++;
	idpw();
}