/*������ �������� ���ϴ� ���α׷�*/

#include<stdio.h>
#define PIE 3.14
int main()
{
	double dis, ang, r;
	printf("�Ÿ��� �Է��Ͻÿ� : ");
	scanf("%lf", &dis);
	printf("������ �Է��Ͻÿ� : ");
	scanf("%lf", &ang);

	r = dis * (360.0 / ang) / 2 / PIE;

	printf("������ �������� : %lf", r);
	return 0;;
}