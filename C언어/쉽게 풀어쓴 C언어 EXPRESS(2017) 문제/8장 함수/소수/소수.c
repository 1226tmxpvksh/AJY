#include <stdio.h>

int get_integer();
void is_prime(int n);

int main()
{
	int n;
	int i;
	n = get_integer();
	for (i = 2; i <= n; i++)
		is_prime(i);
	return 0;
}
int get_integer()
{
	int n;
	printf("숫자를 입력하시오: ");
	scanf_s("%d", &n);
	return n;
}
void is_prime(int n)
{
	int divisors = 0, i;
	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
			divisors++;
	}
	if (divisors == 2)
	{
		printf("%d ", n);
	}
}