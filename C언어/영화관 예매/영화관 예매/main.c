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

		printf("1.����\n2.���\n3.����\n�޴��������Ͻÿ�:");
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
			printf("1������ 3���� �Է��Ͻʽÿ�\n");
			continue;

		}

	}
}