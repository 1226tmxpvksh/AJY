#include <stdio.h>

int get_integer(int n);

int main()
{
	int n;

	printf("������ �Է��Ͻÿ�:");
	scanf_s("%d", &n);

	get_integer(n);
	
	if (get_integer(n) == 0)
		printf("�Ҽ��Դϴ�");
	else
		printf("�Ҽ��� �ƴմϴ�");
}

int get_integer(int n)
{
	for (int i = 2; i < n; i++)
		if (n%i == 0)
		{
			return 1;
		}
		return 0;

}