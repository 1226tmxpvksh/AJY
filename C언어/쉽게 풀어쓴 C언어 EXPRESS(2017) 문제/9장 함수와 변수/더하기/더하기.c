#include <stdio.h>

sub_func(int count);

int main()
{
	int num;
	
	printf("합을 구할 값?");
	scanf_s("%d", &num);

	printf("1부터 %d 까지의 합:%d \n", num, sub_func(num));

	return 0;
}

sub_func(int num)
{
	if (num > 1)
		return num + sub_func(num - 1);
	else
		return 1;
}