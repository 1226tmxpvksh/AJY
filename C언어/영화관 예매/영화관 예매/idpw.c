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

	printf("1.ȸ������\n2.�α���\n3.����\n");
	printf("�޴��� �����Ͻʽÿ�: ");
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
	printf("���̵� �Է��Ͻÿ�: ");
	scanf_s("%d", m[0].id);
	printf("��й�ȣ��  �Է��Ͻÿ�: ");
	scanf_s("%d", m[0].pw);
	printf("�̸��� �Է��Ͻÿ�: ");
	scanf_s("%d", m[0].name);
	printf("���̸� �Է��Ͻÿ�: ");
	scanf_s("%d", m[0].age);
}

void login()
{
	printf("���̵� �Է��Ͻÿ�: ");
	printf("��й�ȣ�� �Է��Ͻÿ�: ");
}