#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double average(double c[]);
double S_D(double d[], double ave);



int main()
{
	double list[10] = { 0 };
	double ave = 0;
	double sd = 0;
	srand((unsigned)time(NULL));
	for(int i=0;i<10;i++)
	{
		printf("�����͸� �Է��Ͻÿ�:");
		scanf_s("%lf", &list[i]);
	}
	ave=average(list)/10;
	printf("��հ���%lf",ave);
	sd = S_D(list, ave) / 10;
	printf("ǥ��������%lf", sd);
}

double average(double c[])
{
	double a = 0;
	for (int i = 0; i < 10; i++)
		a += c[i];
	return a;
}

double S_D(double d[], double ave)
{
	double b = 0;
	for (int i = 0; i < 10; i++)
		b+=(d[i] - ave)*(d[i] - ave);
	return b;
}