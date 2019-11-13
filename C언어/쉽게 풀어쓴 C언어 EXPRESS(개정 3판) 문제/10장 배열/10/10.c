#include <stdio.h>

double vector_add(double x[], double y[], double z[], int i);
double vector_prod(double x[], double y[], double z[]);

int main()
{
	double x[3] = { 1,2,3 };
	double y[3] = { 1,2,3 };
	double z[3] = {0};
	
	printf("∫§≈Õ¿« «’={");
	for (int i = 0; i < 3; i++)
	{
		printf("%lf", vector_add(x, y, z, i));
		
	}
	printf("}");
	printf("\n∫§≈Õ¿« ≥ª¿˚=%lf", vector_prod(x, y, z));
}

double vector_add(double x[], double y[], double z[], int i)
{
	z[i] = x[i] + y[i];
	return z[i];
}

double vector_prod(double x[], double y[], double z[])
{
	double size=0;

	for (int i = 0; i < 3; i++)
	{
		z[i] = x[i] * y[i];
		size += z[i];
		
	}
	return size;
}