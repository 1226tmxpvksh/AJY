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
		printf("비밀번호:");
		scanf("%d", &x);

		if (x == 1234)
		{
			printf("로그인완료");
			break;
		}
		else if (i >= 2)
		{
			printf("로그인 횟수 초과");
			break;
		}
	}
	
}