#include <stdio.h>
char check_alpha(char ch);

int main(void)
{
	char ch;

	printf("문자를 입력하시오:");
	scanf("%c", &ch);

	ch = check_alpha(ch);
}

char check_alpha(char ch)
{
	if (ch >= 'a' && ch <= 'z')
		printf("%c는 알파벳 문자 입니다", ch);
	else
		printf("알파벳이 아닙니다");

	return 0;
}