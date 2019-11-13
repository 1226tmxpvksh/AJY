#include <stdio.h>

int array_equal(int a[], int b[], int size);
#define SIZE 10
int main()
{
	int x[SIZE] = {1,2,3};
	int y[SIZE] = { 0 };

	for (int i = 0; i < SIZE; i++)
		printf("%d ", x[i]);
	printf("\n");
	for (int i = 0; i < SIZE; i++)
		printf("%d ", y[i]);
	printf("\n");

	if (array_equal(x, y, SIZE) == 1)
		printf("2개의 배열은 같음");
	else
		printf("2개의 배열은 다름");

}
int array_equal(int a[], int b[], int size)
{
	for (int i = 0; i < SIZE; i++) {
		if (a[i] == b[i])
			return 1;
		else
			return 0;
	}
}