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
		printf("���° �¼��� �����Ͻðڽ��ϴٱ�?:");
		scanf_s("%d", &seat1);
		if (seat1 <= 0 || seat1 > 10)
		{
			printf("1����10������ �ڸ��� �����ϼ���\n");
			continue;
		}
		if (seat[seat1 - 1] == 0)
		{
			seat[seat1 - 1] = 1;
			printf("����Ǿ����ϴ�\n");
			break;
		}
		else if ((seat[seat1 - 1]) == 1)
		{
			printf("����� �ڸ� �Դϴ�.\n");
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
		printf("���° �¼��� ����Ͻðڽ��ϱ�: ");
		scanf_s("%d", &seat1);

		if (seat1 <= 0 || seat1 > 10)
		{
			printf("1����10������ �ڸ��� �����ϼ���\n");
			continue;
		}
		if (seat[seat1 - 1] != 0)
		{
			seat[seat1 - 1] = 0;
			printf("���� ��� �Ǿ����ϴ�.\n");
			break;

		}
		else
		{
			printf("����� �¼��� �ƴմϴ�.\n");
			continue;
		}
	}
}