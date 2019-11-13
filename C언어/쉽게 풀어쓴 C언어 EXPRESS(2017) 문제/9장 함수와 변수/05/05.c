#include <stdio.h>

int sum(int a) {
	if (a != 0) {
		return a + sum(a-1);
	}
	else {
		return a;
	}
}

int main()
{
	int x;
	printf("정수를 입력하시오:");
	scanf("%d", &x);

	printf("%d", sum(x));
}

