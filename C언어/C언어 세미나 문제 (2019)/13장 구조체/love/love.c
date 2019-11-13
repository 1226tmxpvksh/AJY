#include <stdio.h>

int main()
{
	char tmp[100] = { 0 };
	char* token;
	char seps[] = " ,\t\n";
	char* result = NULL;
	int count = 0;

	printf("문자열입력:");
	scanf("%[^\n]s", tmp);

	token = strtok(tmp, seps);
	for (; token != NULL;)
	{
		if (!strcmp("love", tmp) || result != NULL)
			count++;
		token = strtok(NULL, seps);
	}

	printf("%d", count);

}