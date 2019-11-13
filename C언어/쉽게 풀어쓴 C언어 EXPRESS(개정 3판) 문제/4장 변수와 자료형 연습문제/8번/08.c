#include <stdio.h>

int main(void)
{
	int code;

	printf("아스키 코드를 입력하시오: ");
	scanf("%d", &code);

	printf("문자: %c입니다",(char)code);

	return 0;


}