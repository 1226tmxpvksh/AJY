#include <stdio.h>

int main(void)
{
	int cm, ft;
	double in;

	printf("키:");
	scanf("%d", &cm);

	in = cm / 2.54;
	ft = in / 12;
	in = in - (ft * 12);

	printf("%d은 %d피트%lf인치입니다", cm, ft, in);

	return 0;

}