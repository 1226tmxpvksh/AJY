#include <stdio.h>

int main(void)
{
	int grade, n;
	double average, sum;

	n = 0;
	sum = 0;
	grade = 0;

	printf("종료하려면 음수값을 입력하기오\n");

	while (grade >= 0)
	{
		printf("성적을 입력하시오:");
		scanf("%d", &grade);

		sum += grade;
		n++;
	}

	sum = sum - grade;
	n--;

	average = sum / n;

	printf("성적의 평균은 %d입니다", average);
	return 0;
}