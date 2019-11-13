#include <stdio.h>

int main()
{
	int list[10][3] = { 0 };

	for (int i = 0; i < 10; i++)
	{
		list[i][0] = i + 1;
		list[i][1] = (i + 1)*(i + 1);
		list[i][2] = (i + 1)*(i + 1)*(i + 1);
	}
	int n;
	printf("정수를 하시오:");
	scanf("%d", &n);
	
	for (int i = 0; i < 10; i++)
	{
		if (n == list[i][2])
			printf("%d의 제곱은은 %d\n", n, i+1);
	}
}