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
	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &x);

	printf("%d", sum(x));
}

