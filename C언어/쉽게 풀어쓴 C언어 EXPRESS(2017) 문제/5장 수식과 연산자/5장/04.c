#include <stdio.h>

int main(void)
{
	int cm, ft;
	double in;

	printf("Ű:");
	scanf("%d", &cm);

	in = cm / 2.54;
	ft = in / 12;
	in = in - (ft * 12);

	printf("%d�� %d��Ʈ%lf��ġ�Դϴ�", cm, ft, in);

	return 0;

}