#include <stdio.h>

int main(void)
{
	int o,x,PI,IN;
	double y,d;

	PI = 12 * 2.54;
	IN = 2.54;
	printf("Ű�� �Է��Ͻÿ�:");
	scanf("%d", &o);

	x = o / PI;
	d = o % PI;

	y = d / IN;

	printf("%dcm�� %d��Ʈ %lf��ġ�Դϴ�", o, x, y);

	return 0;
}