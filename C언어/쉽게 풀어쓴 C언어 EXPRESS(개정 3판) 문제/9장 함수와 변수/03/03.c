#include <stdio.h>

void check();

int main()
{
	check();
}

void check()
{	
	static int x;
	for (int i = 0; i < 4; i++)
	{
		printf("��й�ȣ:");
		scanf("%d", &x);

		if (x == 1234)
		{
			printf("�α��οϷ�");
			break;
		}
		else if (i >= 2)
		{
			printf("�α��� Ƚ�� �ʰ�");
			break;
		}
	}
	
}