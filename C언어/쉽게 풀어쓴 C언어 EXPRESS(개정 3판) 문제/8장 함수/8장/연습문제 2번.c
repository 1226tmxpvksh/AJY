#include <stdio.h>
char check_alpha(char ch);

int main(void)
{
	char ch;

	printf("���ڸ� �Է��Ͻÿ�:");
	scanf("%c", &ch);

	ch = check_alpha(ch);
}

char check_alpha(char ch)
{
	if (ch >= 'a' && ch <= 'z')
		printf("%c�� ���ĺ� ���� �Դϴ�", ch);
	else
		printf("���ĺ��� �ƴմϴ�");

	return 0;
}