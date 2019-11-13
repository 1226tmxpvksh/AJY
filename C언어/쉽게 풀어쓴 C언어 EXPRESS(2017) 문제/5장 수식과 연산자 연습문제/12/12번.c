/*비트이동연산*/

#include<stdio.h>
int main()
{
	char a, b, c, d;
	unsigned int result;

	printf("첫번째 문자를 입력하시오 : ");
	scanf("%c", &a);
	printf("두번째 문자를 입력하시오 : ");
	scanf("\n%c", &b);
	printf("세번째 문자를 입력하시오 : ");
	scanf("\n%c", &c);
	printf("네번째 문자를 입력하시오 : ");
	scanf("\n%c", &d);

	result = a;
	result = b << 8 | result;
	result = c << 16 | result;
	result = d << 24 | result;

	printf("결과값 : %x", result);
	return 0;
}n