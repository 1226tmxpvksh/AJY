#include <stdio.h>

int fib(int n);

int main()
{

		int x;

		printf("¸î¹ø:");
		scanf_s("%d", &x);
		for (int i = 0; i < x+1; i++) {
			printf("fib(%d) = %d\n", i, fib(i));
		}
}

int fib(int n)
{

	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return fib(n - 2) + fib(n - 1);
}