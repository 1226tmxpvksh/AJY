#include <Stdio.h>

int main(void)
{
	int x;

	printf("정수를 입력하시오:");
	scanf("%d", &x);

	printf("약수:");
	for (int i = 1; i <= x; i++)
	{
		if (x%i == 0)
			printf("%d ", i);
	}
	return 0;
}