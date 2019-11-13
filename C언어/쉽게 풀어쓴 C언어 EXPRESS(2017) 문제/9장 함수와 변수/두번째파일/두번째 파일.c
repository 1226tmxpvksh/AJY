#include <stdio.h>

void sub();

int main()
{
	extern int abc(int a);
	extern int b;
	extern int c;
	abc(b);
	printf("gg");
}

void sub()
{
	printf("zz");
}