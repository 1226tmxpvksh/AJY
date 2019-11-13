#include <stdio.h>

int get_integer(int n);

int main()
{
	int n;

	printf("정수를 입력하시오:");
	scanf_s("%d", &n);

	get_integer(n);
	
	if (get_integer(n) == 0)
		printf("소수입니다");
	else
		printf("소수가 아닙니다");
}

int get_integer(int n)
{
	for (int i = 2; i < n; i++)
		if (n%i == 0)
		{
			return 1;
		}
		return 0;

}