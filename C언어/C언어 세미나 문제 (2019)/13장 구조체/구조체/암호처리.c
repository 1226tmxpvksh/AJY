#include <stdio.h>

int main()
{
	char password[20]="";
	int count = 0;

	printf("비밀번호:");
	scanf("%s", password);

	for (int i = 0; i < 20; i++)
	{
		if (password[i] != NULL)
			count++;
	}

	for (int i = 0; i < count; i++)
	{
		password[i] += 2;
	}

	printf("%s", password);
}