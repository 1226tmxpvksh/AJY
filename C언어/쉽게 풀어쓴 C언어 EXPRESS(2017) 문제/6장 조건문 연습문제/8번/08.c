#include <stdio.h>

int main(void)
{
	int hour, age;

	printf("현재 시간과 나이를 입력하시오:");
	scanf("%d %d", &hour, &age);

	if (hour < 17)
	{
		if (age > 12 && age < 65)
			printf("요금은 25000입니다");
		else
			printf("요금은 34000입니다");
	}
	else
		printf("요금은 10000입니다");
	return 0;
}