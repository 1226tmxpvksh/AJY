/*��Ʈ�̵�����*/

#include<stdio.h>
int main()
{
	char a, b, c, d;
	unsigned int result;

	printf("ù��° ���ڸ� �Է��Ͻÿ� : ");
	scanf("%c", &a);
	printf("�ι�° ���ڸ� �Է��Ͻÿ� : ");
	scanf("\n%c", &b);
	printf("����° ���ڸ� �Է��Ͻÿ� : ");
	scanf("\n%c", &c);
	printf("�׹�° ���ڸ� �Է��Ͻÿ� : ");
	scanf("\n%c", &d);

	result = a;
	result = b << 8 | result;
	result = c << 16 | result;
	result = d << 24 | result;

	printf("����� : %x", result);
	return 0;
}n