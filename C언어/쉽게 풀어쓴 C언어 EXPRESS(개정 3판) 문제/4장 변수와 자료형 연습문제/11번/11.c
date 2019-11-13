#include <stdio.h>

int main(void)
{
	char code1 = 65;
	char code2 = 97;

	printf("\"ASCII code\",'%c','%c','%c' \n", code1, code1 + 1, code1 + 2);
	printf("\\t \\a \\n");

	return 0;
}